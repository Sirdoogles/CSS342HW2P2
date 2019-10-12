#include <iostream>
#include <fstream>
#include "classB.h"
using namespace std;

classB::classB(int size)
{
	ptr = (size > 0) ? new int[size] : nullptr;
	cout << "classB constructor called" << endl;
}

void classB::print()
{
	cout << "print(virtual) classB class" << endl;
}

void classB::show()
{
	cout << "show(non-virtual) in classB class" << endl;
}

classB::~classB()
{
	delete[]ptr;
	cout << "~DerivedB() called" << endl;
}
