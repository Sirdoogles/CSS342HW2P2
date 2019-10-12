#pragma once
#include <iostream>
#include <fstream>
#include "base.h"
using namespace std;

class classB:public Base
{
	int* ptr;
public:
	// classB constructor
	classB(int size);
	void print();
	void show();
	// classB destructor
	~classB();
};