// C++ Primer Plus
// Ex 3_7
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	double euro, us;
	cout << "Enter in Euro type: " ;
	cin >> euro;
	
	us = 100.0 / (euro / 0.6214 / 3.875);
	
	cout << us << "mpg" << endl;
}