// C++ Primer Plus
// Ex 7_1
// By Jiahe Zhang

#include <iostream>
using namespace std;

double getHarmonic(double x, double y);

int main()
{
	int x, y;
	cout << "Enter two number: " ;
	
	while (cin >> x >> y)
	{
		if (x == 0 || y == 0)
			break;
		cout << "The harmonic mean is : " << getHarmonic(x, y) << endl;
		cout << "Enter two number: " ;
	}
	
	cout << "Bye." << endl;
}

double getHarmonic(double x, double y)
{
	return 2.0 * x * y / (x + y);
}