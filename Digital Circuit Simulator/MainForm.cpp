#include "MainForm.hpp"
#include <mpi.h>
#include <stdio.h>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

[STAThread]
void main(array<String^>^ args) {
	int numprocs, rank;

	MPI_Init(nullptr, nullptr);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	printf("ok%d", rank);
	//if(rank == 0 && numprocs == 1) {
	if(args->GetLength(0) == 0) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		DigitalCircuitSimulator::MainForm form;
		Application::Run(%form);
	}/*
	else {
		
		
		//Server
		if(rank == 0) {printf("ok%d", rank);
			MPI_Status status;
			int nInputs, nOutputs, nGates, j = 3;

			nInputs = Convert::ToInt32(args[0]);
			nOutputs = Convert::ToInt32(args[1]);
			nGates = Convert::ToInt32(args[2]);

			for(int i = 1; i <= nGates; i++) {
				MPI_Send((void*)Marshal::StringToHGlobalAnsi(args[j]), args[j]->Length, MPI_CHAR, i, 100, MPI_COMM_WORLD);	//Gate function
				j++;
				MPI_Send((void*)Marshal::StringToHGlobalAnsi(args[j]), args[j]->Length, MPI_CHAR, i, 101, MPI_COMM_WORLD);	//Input 1
				j++;
				if(String::Compare(args[j-2], "NOT") != 0) {
					MPI_Send((void*)Marshal::StringToHGlobalAnsi(args[j]), args[j]->Length, MPI_CHAR, i, 102, MPI_COMM_WORLD);	//Input 2
					j++;
				}
				MPI_Send((void*)Marshal::StringToHGlobalAnsi(args[j]), args[j]->Length, MPI_CHAR, i, 103, MPI_COMM_WORLD);	//Output
				j++;
			}

			int nInputValues[16] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
			for(int i = 0; i < nInputs; i++)
				nInputValues[i] = Convert::ToInt32(args[j + i]);

			//Broadcast input values
			MPI_Bcast(nInputValues, 16, MPI_INT, 0, MPI_COMM_WORLD);

			//Receive output values
			for(int i = 1; i <= nOutputs; i++) {
				int nRecv;
				MPI_Recv(&nRecv, 1, MPI_INT, MPI_ANY_SOURCE, 200 + i, MPI_COMM_WORLD, &status);
				printf("Output %d: %d\n", i, nRecv);
			}
		}
		//Client
		else {printf("ok%d", rank);
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

			//Receive output
			MPI_Probe(0, 103, MPI_COMM_WORLD, &status);
			MPI_Get_count(&status, MPI_CHAR, &nRecvSize);
			szGateOutput = (char*)malloc(nRecvSize * sizeof(char));
			MPI_Recv(szGateOutput, nRecvSize, MPI_CHAR, 0, 103, MPI_COMM_WORLD, &status);

			//Receive input values
			MPI_Bcast(nInputValues, 16, MPI_INT, 0, MPI_COMM_WORLD);

			//Receive input on input 1
			if(strncmp(szGateInput1, "Gate", 4) == 0)
				MPI_Recv(&nInput1, 1, MPI_INT, Convert::ToInt32(szGateInput1[4]), 300 + Convert::ToInt32(szGateInput1[4]), MPI_COMM_WORLD, &status);
			else
				nInput1 = nInputValues[atoi(szGateInput1 + 4)];

			if(strcmp(szGateFunc, "NOT") != 0) {
				//Receive input on input 2
				if(strncmp(szGateInput1, "Gate", 4) == 0)
					MPI_Recv(&nInput2, 1, MPI_INT, Convert::ToInt32(szGateInput1[4]), 300 + Convert::ToInt32(szGateInput1[4]), MPI_COMM_WORLD, &status);
				else
					nInput2 = nInputValues[atoi(szGateInput1 + 4)];
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
				for(int i = 1; i < numprocs; i++)
					if(i != rank)
						MPI_Isend(&nOutput, 1, MPI_INT, i, 300 + i, MPI_COMM_WORLD, &request);
			}
			else
				MPI_Send(&nOutput, 1, MPI_INT, 0, 200 + Convert::ToInt32(szGateOutput[6]), MPI_COMM_WORLD);
		}
	}*/
	
	MPI_Finalize();
}