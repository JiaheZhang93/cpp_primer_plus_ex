// C++ Primer Plus
// Ex 10_4
// By Jiahe Zhang

// sales.cpp
#include <iostream>
#include "sales.h"
using namespace std;

namespace SALES
{
	Sales::Sales()
	{
		double ar[QUARTERS] = {};
		*this = Sales(ar, 4);
	}
	Sales::Sales(const double ar[], int n)
	{
		for (int i = 0; i < QUARTERS; i++)
			sales[i] = 0;
		
		int cnt = n > 4 ? 4 : n;
		double maxs = ar[0];
		double mins = ar[0];
		double sum = 0;
		for (int i = 0; i < cnt; i++)
		{
			sales[i] = ar[i];
			if (ar[i] > maxs)
				maxs = ar[i];
			if (ar[i] < mins)
				mins = ar[i];
			sum += ar[i];
		}
		max = maxs;
		min = mins;
		average = sum / n;
	}
	
	void Sales::setSales()
	{
		double input[4];
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Enter the sales of quarter #" << i + 1 << ": ";
			cin >> input[i];
		}
		cout << endl;
		*this = Sales(input, 4);
	}
	
	void Sales::showSales() const
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "The sales of quarter #" << i + 1 << " i ";
			cout << sales[i] << endl;
		}
		cout << "The max value: " << max << endl;
		cout << "The min value: " << min << endl;
		cout << "The average value: " << average << endl;
		cout << endl;
	}
}