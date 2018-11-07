// C++ Primer Plus
// Ex 5_6
// By Jiahe Zhang
// Use ".\a.exe < 5_6_Input.txt" for input.
// In PowerShell, Use "Get-Content 5_6_Input.txt | .\a.exe"

#include <iostream>
using namespace std;

int main()
{
	int sales[3][12];
	int sums[3] {};
	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> sales[i][j];
			sums[i] += sales[i][j];
			total += sales[i][j];
		}
	}
	
	cout << "The sales for each year is " << sums[0] << ", " << sums[1] << ", " << sums[2] << ".\n";
	cout << "The sales for 3 years totally is " << total << ".\n";
}