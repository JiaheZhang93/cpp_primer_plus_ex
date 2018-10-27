// C++ Primer Plus
// Ex 3_1
// By Jiahe Zhang

#include <iostream>
using namespace std;

const int INCH_FACTOR = 12;

int main()
{
	cout << "Enter your height in inch: ___\b\b\b";
	int hInch, hFeet;
	cin >> hInch;
	hFeet = hInch / INCH_FACTOR;
	hInch = hInch % INCH_FACTOR;
	cout << "Your height is " << hFeet << " feet " << hInch << " inches." << endl;
}