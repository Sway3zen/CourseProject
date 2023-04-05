#include "LoginForm.h"
#include <Windows.h>
char* loginStr;
using namespace CourseProject4;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LoginForm);
	return 0;
}
