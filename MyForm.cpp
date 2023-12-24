#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Ensures a single thread is used by the program because CPP GUI applications are not safe in MULTI THREAD

int main(array<String^>^ args) { // Starting point of the program
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    POS::MyForm form; // Instantiate the main form "MyForm"
    Application::Run(%form);

    return 0; // Ensure that the main function returns an integer
}
