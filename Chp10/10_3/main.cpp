// C++ Primer Plus
// Ex 10_3
// By Jiahe Zhang

// main.cpp

#include <iostream>
#include "golf.h"
using namespace std;

const int Size = 3;

int main()
{
	Golf ann;
	ann = Golf("Ann BirdFree", 24);
	ann.showgolf();
	
	Golf g[Size];
	int i = 0;
	while (i < Size && g[i].setgolf())
		i++;
	
	cout << endl;
	for (int j = 0; j < i; j++)
	{
		cout << "#" << j + 1 << ": " << endl;
		g[j].showgolf();
	}
}