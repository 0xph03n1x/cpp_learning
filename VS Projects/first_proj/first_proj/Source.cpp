#include <iostream>
#include <Windows.h>

int main() {

	std::wstring name = L"";
	std::cout << "Enter your name: ";
	std::wcin >> name;


	MessageBox(NULL, (L"Your name is: " + name).c_str(), L"Zaglawie", MB_OK | MB_ICONQUESTION);
	return 0;
}