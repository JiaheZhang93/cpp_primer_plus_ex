// C++ Primer Plus
// Ex 2_5
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter a Celsius value: " ;
	double tempC;
	cin >> tempC;
	double tempF = 1.8 * tempC + 32.0;
	cout << tempC << " degrees Celsius is " << tempF << " degrees Fahrenheit." << endl;
}