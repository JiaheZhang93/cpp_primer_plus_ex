// C++ Primer Plus
// Ex 5_1
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	int start, end;
	cout << "Enter the start number: ";
	cin >> start;
	cout << "Enter the end number: ";
	cin >> end;
	
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		sum += i;
	}
	
	cout << "The summation is " << sum << endl;
}