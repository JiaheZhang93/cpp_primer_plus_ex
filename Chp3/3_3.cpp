// C++ Primer Plus
// Ex 3_3
// By Jiahe Zhang

#include <iostream>
#include <cmath>
using namespace std;

const double FACTOR = 60;

int main()
{
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	int deg, min, sec;
	cout << "First, enter the degrees: ";
	cin >> deg;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;
	
	double degDouble = deg + min / FACTOR + sec / FACTOR / FACTOR;
	
	cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << degDouble << " degrees" << endl;
}