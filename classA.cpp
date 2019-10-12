#include <iostream>
#include <fstream>
#include "classA.h"
using namespace std;

classA::classA(int size)
{
	ptr = (size > 0) ? new int[size] : nullptr;
	cout << "classA constructor called" << endl;
}

void classA::print()
{
	cout << "print(virtual) classA class" << endl;
}

void classA::show()
{
	cout << "show(non-virtual) in classA class" << endl;
}

classA::~classA()
{
	delete[]ptr;
	cout << "~classA() called" << endl;
}
