// C++ Primer Plus
// Ex 10_3
// By Jiahe Zhang

// golf.cpp

#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;

Golf::Golf()
{
	strcpy(fullname, "none");
	handicap = 0;
}

Golf::Golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

int Golf::setgolf()
{
	char *fn = new char[Len];
	int hc;
	cout << "Enter full name: " ;
	cin.getline(fn, Len);
	if (!strlen(fn))
		return 0;
	cout << "Enter handicap: " ;
	cin >> hc;
	cin.get();
	cout << endl;
	*this = Golf(fn, hc);
	return 1;
}

void Golf::sethandicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf() const
{
	cout << "Full name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
	cout << endl;
}