#include "MainForm.hpp"
#include <mpi.h>
#include <stdio.h>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	int numprocs, rank;

	MPI_Init(nullptr, nullptr);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);

	//printf("rank %d of %d\n", rank, numprocs);
	TCHAR szFileName[MAX_PATH];
	GetModuleFileName( NULL, szFileName, MAX_PATH );

	//if(rank == 0 && numprocs == 1) {
	if(args->GetLength(0) == 0) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		DigitalCircuitSimulator::MainForm form;
		Application::Run(%form);
	}
	else {
		//Gate functions: AND - 0, OR - 1, NOT - 2
		//*.exe [# of inputs] [# of outputs] [# of gates] \
		[input 1 value] [input 2 value] ... [input n value] \
		[gate 1 function] [gate 1 input 1] [gate 1 input 2] [gate 1 output] \
		[gate 2 function] [gate 2 input 1] [gate 2 input 2] [gate 2 output] \
		...
	}
	
	MPI_Finalize();
}