#include<iostream> 
using namespace std;
#include "base.h"


void Base::print()
{
	cout << "print(virtual) in Base class" << endl;
}

void Base::show()
{
	cout << "show(non-virtual) in Base class" << endl;
}

// Destructor 
Base::~Base()
{
	cout << "~Base() Called" << endl;
}
