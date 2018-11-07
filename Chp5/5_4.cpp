// C++ Primer Plus
// Ex 5_4
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	double Daphne(100), Cleo(100);
	int year = 0;
	do
	{
		year++;
		Daphne += 10;
		Cleo *= 1.05;
	}while(Daphne > Cleo);
	
	cout << "Cleo has more money than Daphne at year " << year << ".\n";
	cout << "Daphne has $" << Daphne << ".\n";
	cout << "Cleo has $" << Cleo << ".\n";
}