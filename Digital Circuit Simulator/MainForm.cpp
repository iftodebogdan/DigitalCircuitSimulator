#include "MainForm.hpp"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    DigitalCircuitSimulator::MainForm form;
    Application::Run(%form);
}