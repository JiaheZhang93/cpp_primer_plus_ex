// C++ Primer Plus
// Ex 10_6
// By Jiahe Zhang

// main.cpp

#include <iostream>
#include "move.h"
using namespace std;

int main()
{
	Move m1(1.5, 5);
	Move m2, m3;
	
	cout << "m1: " << endl;
	m1.showmove();
	cout << "m2: " << endl;
	m2.showmove();
	cout << "m3: " << endl;
	m3.showmove();
	
	m2.reset(1.5, -1);
	m3 = m1.add(m2);
	
	cout << "m1: " << endl;
	m1.showmove();
	cout << "m2: " << endl;
	m2.showmove();
	cout << "m3: " << endl;
	m3.showmove();
}