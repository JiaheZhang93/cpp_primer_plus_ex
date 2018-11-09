// C++ Primer Plus
// Ex 6_5
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	double income;
	
	cout << "Enter your income: ";
	cin >> income;
	
	while (cin and income >= 0)
	{
		double tax = 0;
		if (income > 35000)
		{
			tax += (income - 35000) * 0.2;
			income = 35000;
		}
		if (income > 15000)
		{
			tax += (income - 15000) * 0.15;
			income = 15000;
		}
		if (income > 5000)
		{
			tax += (income - 5000) * 0.1;
			income = 5000;
		}
		
		cout << "Tax: " << tax << " tvarps." << endl;
		cout << "Enter your income: ";
		cin >> income;
	}
	
	cout << "Bye!" << endl;
	
}