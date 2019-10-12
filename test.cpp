#include "classA.h"
#include "classB.h"
int main()
{
	classA* pA = new classA(10);
	classB* pB = new classB(20);

	//NON-VIRTUAL function, binded at compile time 
	Base* pBase = pA;
	pBase->show();

	pBase = pB;
	pBase->show();

	//VIRTUAL function, binded at runtime 
	pBase = pA;
	pBase->print();

	pBase = pB;
	pBase->print();

	// which descructor is called? -Calls derived destructor then base one.
	pBase = pA;
	delete pBase;

	pBase = pB;
	delete pBase;
}
