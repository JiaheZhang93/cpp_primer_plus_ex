// C++ Primer Plus
// Ex 5_3
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int n;
	cout << "Enter a number: " ;
	cin >> n;
	while (n)
	{
		sum += n;
		cout << "The summation is " << sum << " now!" << endl;
		cout << "Enter a number: " ;
		cin >> n;
	}
	
	cout << "Finished!\n";
	
}