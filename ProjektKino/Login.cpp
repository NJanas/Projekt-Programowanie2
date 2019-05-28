#include "Searcher.h"
using namespace ProjektKino;

[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Searcher());
	return 0;
}