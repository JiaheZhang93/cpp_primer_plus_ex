// C++ Primer Plus
// Ex 7_5
// By Jiahe Zhang

#include <iostream>
using namespace std;

long double factorial(int n);

int main()
{
	int n;
	cout << "Enter a int number: " ;
	while (cin >> n)
	{
		cout << "The factorial of " << n << " is " << factorial(n) << endl;
		cout << "Enter a int number: " ;
	}
	cout << "Bye!" << endl;
}

long double factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}