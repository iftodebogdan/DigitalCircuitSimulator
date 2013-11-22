// DCS_MPI.cpp : Defines the entry point for the console application.
//
//arguments:
//	[# of inputs] [# of outputs] [# of gates]
//	[gate 1 function] [gate 1 input 1] [gate 1 input 2] [gate 1 output]
//	[gate 2 function] [gate 2 input 1] [gate 2 input 2] [gate 2 output]
//		...
//	[input 1 value] [input 2 value] ... [input n value]
//
//1 1 1 NOT Test1 Output1 1
//3 1 3 AND Test1 Test2 Gate1 OR Test3 Gate1 Gate2 NOT Gate2 Output1 1 0 1
//3 2 3 AND Test1 Test2 Gate1 NOT Gate1 Output1 OR Test3 Gate1 Output2 1 1 1

#include <stdio.h>
#include <mpi.h>
#include <Windows.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int numprocs, rank, i;
  int nInputValues[16] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
  
  if(rank == 0) {
		MPI_Status status;
		int nInputs, nOutputs, nGates, j = 4;

		nInputs = atoi(argv[1]);
		nOutputs = atoi(argv[2]);
		nGates = atoi(argv[3]);

		for(i = 1; i <= nGates; i++) {
			MPI_Send(argv[j], strlen(argv[j]) + 1, MPI_CHAR, i, 100, MPI_COMM_WORLD);	//Gate function
			j++;
			MPI_Send(argv[j], strlen(argv[j]) + 1, MPI_CHAR, i, 101, MPI_COMM_WORLD);	//Input 1
			j++;
			if(strcmp(argv[j-2], "NOT") != 0) {
				MPI_Send(argv[j], strlen(argv[j]) + 1, MPI_CHAR, i, 102, MPI_COMM_WORLD);	//Input 2
				j++;
			}
			MPI_Send(argv[j], strlen(argv[j]) + 1, MPI_CHAR, i, 103, MPI_COMM_WORLD);	//Output
			j++;
		}

		for(i = 0; i < nInputs; i++)
			nInputValues[i] = atoi(argv[j + i]);

		//Broadcast input values
		MPI_Bcast((void*)nInputValues, 16, MPI_INT, 0, MPI_COMM_WORLD);

		//Receive output values
		for(i = 1; i <= nOutputs; i++) {
			int nRecv;
			MPI_Recv(&nRecv, 1, MPI_INT, MPI_ANY_SOURCE, 200 + i, MPI_COMM_WORLD, &status);
			printf("Output %d: %d\n", i, nRecv);
		}
	}
	//Client
	else {
		MPI_Status status;
		MPI_Request request;
		char *szGateFunc, *szGateInput1, *szGateInput2, *szGateOutput;
		int nInput1 = -1 , nInput2 = -1, nOutput = -1, nInputValues[16], nRecvSize;

		//Receive gate function
		MPI_Probe(0, 100, MPI_COMM_WORLD, &status);
		MPI_Get_count(&status, MPI_CHAR, &nRecvSize);
		szGateFunc = (char*)malloc(nRecvSize * sizeof(char));
		MPI_Recv(szGateFunc, nRecvSize, MPI_CHAR, 0, 100, MPI_COMM_WORLD, &status);
			
		//Receive input 1
		MPI_Probe(0, 101, MPI_COMM_WORLD, &status);
		MPI_Get_count(&status, MPI_CHAR, &nRecvSize);
		szGateInput1 = (char*)malloc(nRecvSize * sizeof(char));
		MPI_Recv(szGateInput1, nRecvSize, MPI_CHAR, 0, 101, MPI_COMM_WORLD, &status);

		if(strcmp(szGateFunc, "NOT") != 0) {
			//Receive input 2
			MPI_Probe(0, 102, MPI_COMM_WORLD, &status);
			MPI_Get_count(&status, MPI_CHAR, &nRecvSize);
			szGateInput2 = (char*)malloc(nRecvSize * sizeof(char));
			MPI_Recv(szGateInput2, nRecvSize, MPI_CHAR, 0, 102, MPI_COMM_WORLD, &status);
		}
		else {
			szGateInput2 = (char*)malloc(5 * sizeof(char));
			strcpy(szGateInput2, "NULL");
		}

		//Receive output
		MPI_Probe(0, 103, MPI_COMM_WORLD, &status);
		MPI_Get_count(&status, MPI_CHAR, &nRecvSize);
		szGateOutput = (char*)malloc(nRecvSize * sizeof(char));
		MPI_Recv(szGateOutput, nRecvSize, MPI_CHAR, 0, 103, MPI_COMM_WORLD, &status);

		//Receive input values
		MPI_Bcast(nInputValues, 16, MPI_INT, 0, MPI_COMM_WORLD);

		//Receive input on input 1
		if(strncmp(szGateInput1, "Gate", 4) == 0) {
			int req = 1;
			MPI_Send(&req, 1, MPI_INT, atoi(szGateInput1 + 4), 400 + atoi(szGateInput1 + 4), MPI_COMM_WORLD);
			MPI_Recv(&nInput1, 1, MPI_INT, atoi(szGateInput1 + 4), 400 + atoi(szGateInput1 + 4), MPI_COMM_WORLD, &status);
		}
		else
			nInput1 = nInputValues[atoi(szGateInput1 + 4) - 1];

		if(strcmp(szGateFunc, "NOT") != 0) {
			//Receive input on input 2
			if(strncmp(szGateInput2, "Gate", 4) == 0) {
				int req = 1;
				MPI_Send(&req, 1, MPI_INT, atoi(szGateInput2 + 4), 400 + atoi(szGateInput2 + 4), MPI_COMM_WORLD);
				MPI_Recv(&nInput2, 1, MPI_INT, atoi(szGateInput2 + 4), 400 + atoi(szGateInput2 + 4), MPI_COMM_WORLD, &status);
			}
			else
				nInput2 = nInputValues[atoi(szGateInput2 + 4) - 1];
		}

		//Calculate output
		if(strcmp(szGateFunc, "AND") == 0)
			nOutput = nInput1 && nInput2;
		else
			if(strcmp(szGateFunc, "NOT") == 0)
				nOutput = !nInput1;
			else
				nOutput = nInput1 || nInput2;

		//Send output
		if(strncmp(szGateOutput, "Gate", 4) == 0) {
				int j = -1;
				for(i = 0; i < argc; i++)
					if(strcmp(argv[i], szGateOutput) == 0)
						j++;
				for(i = 1; i <= j; i++) {
					int req;
					MPI_Recv(&req, 1, MPI_INT, MPI_ANY_SOURCE, 400 + rank, MPI_COMM_WORLD, &status);
					MPI_Send(&nOutput, 1, MPI_INT, status.MPI_SOURCE, 400 + rank, MPI_COMM_WORLD);
				}
		}
		else
			MPI_Send(&nOutput, 1, MPI_INT, 0, 200 + atoi(szGateOutput + 6), MPI_COMM_WORLD);

		//printf("\n\nGate %d\n%s\n%s=%d\n%s=%d\n%s=%d\n\n", rank, szGateFunc, szGateInput1, nInput1, szGateInput2, nInput2, szGateOutput, nOutput);
	}

  MPI_Finalize();

  return 0;
}