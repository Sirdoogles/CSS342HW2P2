#pragma once
#include <iostream>
#include <fstream>
#include "base.h"
using namespace std;

class classA: public Base
{
	int* ptr;

public:
	// classA constructor
	classA(int size);
	void print();
	void show();
	// classA destructor
	~classA();
};
