// C++ Primer Plus
// Ex 8_5
// By Jiahe Zhang

#include <iostream>
using namespace std;

template <typename T>
T max5(const T []);

int main()
{
	int arrayInt[5] {1, 2, 5, 4, 3};
	double arrayDouble[5] {1.2, 2.4, 3.6, 3.0, 1.1};
	
	cout << "The max value of int array is: " << max5(arrayInt) << endl;
	cout << "The max value of the double array is: " << max5(arrayDouble) << endl;
	
}

template <typename T>
T max5(const T a [])
{
	T max = a[0];
	for (int i = 1; i < 5; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}