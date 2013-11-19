#include "MainForm.hpp"
#include <mpi.h>
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	int numprocs, rank;

	MPI_Init(nullptr, nullptr);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);

	//if(rank == 0 && numprocs == 1) {
	if(args->GetLength(0) == 0) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		DigitalCircuitSimulator::MainForm form;
		Application::Run(%form);
	}
	else {
		//arguments:
		//	[# of inputs] [# of outputs] [# of gates]
		//	[gate 1 function] [gate 1 input 1] [gate 1 input 2] [gate 1 output]
		//	[gate 2 function] [gate 2 input 1] [gate 2 input 2] [gate 2 output]
		//		...
		//	[input 1 value] [input 2 value] ... [input n value]
		printf("STAHP!");
	}
	
	MPI_Finalize();
}