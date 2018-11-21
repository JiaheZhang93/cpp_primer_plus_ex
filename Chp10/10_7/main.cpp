// C++ Primer Plus
// Ex 10_7
// By Jiahe Zhang

// main.cpp

#include <iostream>
#include "plorg.h"

int main()
{
	Plorg c1;
	Plorg c2("Mike");
	Plorg c3("Bill", 22);
	
	c1.report();
	c2.report();
	c3.report();
	
	c1.setCi(66);
	
	c1.report();
}