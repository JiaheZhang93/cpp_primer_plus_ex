// C++ Primer Plus
// Ex 9_4
// By Jiahe Zhang

// sales.cpp
#include <iostream>
#include "sales.h"
using namespace std;

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		for (int i = 0; i < QUARTERS; i++)
			s.sales[i] = 0;
		
		int cnt = n > 4 ? 4 : n;
		double maxs = ar[0];
		double mins = ar[0];
		double sum = 0;
		for (int i = 0; i < cnt; i++)
		{
			s.sales[i] = ar[i];
			if (ar[i] > maxs)
				maxs = ar[i];
			if (ar[i] < mins)
				mins = ar[i];
			sum += ar[i];
		}
		s.max = maxs;
		s.min = mins;
		s.average = sum / n;
	}
	
	void setSales(Sales & s)
	{
		double input[4];
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Enter the sales of quarter #" << i + 1 << ": ";
			cin >> input[i];
		}
		cout << endl;
		setSales(s, input, 4);
	}
	
	void showSales(const Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "The sales of quarter #" << i + 1 << " i ";
			cout << s.sales[i] << endl;
		}
		cout << "The max value: " << s.max << endl;
		cout << "The min value: " << s.min << endl;
		cout << "The average value: " << s.average << endl;
		cout << endl;
	}
}