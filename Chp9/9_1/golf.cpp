// C++ Primer Plus
// Ex 9_1
// By Jiahe Zhang

// golf.cpp

#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	cout << "Enter full name: " ;
	cin.getline(g.fullname, Len);
	if (!strlen(g.fullname))
		return 0;
	cout << "Enter handicap: " ;
	cin >> g.handicap;
	cin.get();
	cout << endl;
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	cout << "Full name: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
	cout << endl;
}