// C++ Primer Plus
// Ex 3_6
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	double dis, vol;
	cout << "Enter the distance in KM: ";
	cin >> dis;
	cout << "Enter the oil volume in L: ";
	cin >> vol;
	
	cout << 100 * vol / dis << "L/100km" << endl;
}