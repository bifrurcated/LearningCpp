#include <iostream>
#include "MyClass.h"

using namespace std;

/*
* Многофайловый проект
*/


int main()
{
	setlocale(LC_ALL, "RU");
	
	myNamespace::MyClass m;
	m.PrintMessage("Multifile project");

	return 0;
}
