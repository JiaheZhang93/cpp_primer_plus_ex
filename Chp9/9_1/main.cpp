// C++ Primer Plus
// Ex 9_1
// By Jiahe Zhang

// main.cpp

#include <iostream>
#include "golf.h"
using namespace std;

const int Size = 3;

int main()
{
	golf ann;
	setgolf(ann, "Ann BirdFree", 24);
	showgolf(ann);
	
	golf g[Size];
	int i = 0;
	while (i < Size && setgolf(g[i]))
		i++;
	
	cout << endl;
	for (int j = 0; j < i; j++)
	{
		cout << "#" << j + 1 << ": " << endl;
		showgolf(g[j]);
	}
}