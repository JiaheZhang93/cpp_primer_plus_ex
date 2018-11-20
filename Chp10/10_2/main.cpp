// C++ Primer Plus
// Ex 10_2
// By Jiahe Zhang

// main.cpp

#include <iostream>
#include "person.h"
using namespace std;

int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	two.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;
}