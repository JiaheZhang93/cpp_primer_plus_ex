// C++ Primer Plus
// Ex 5_5
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string months[12] = {"January", "February", "March", "April", "May", "June",
						"July", "August", "September", "October", "November", "December"};
	int sales[12];
	
	int sum = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the sales in " << months[i] << ": " ;
		cin >> sales[i];
		sum += sales[i];
	}
	
	cout << "The number of sales this year is " << sum << ".\n";
}