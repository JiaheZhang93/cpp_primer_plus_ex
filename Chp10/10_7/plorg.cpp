// C++ Primer Plus
// Ex 10_7
// By Jiahe Zhang

// plorg.cpp

#include <cstring>
#include <iostream>
#include "plorg.h"

Plorg::Plorg(const char * n, int c)
{
	strcpy(name, n);
	ci = c;
}

void Plorg::setCi(int c)
{
	ci = c;
}

void Plorg::report() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << name << endl;
	cout << "CI: " << ci << endl;
}