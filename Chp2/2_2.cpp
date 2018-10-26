// C++ Primer Plus
// Ex 2_2
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	double disLong, disYard;
	cout << "Please input a distance in long: ";
	cin >> disLong;
	disYard = disLong * 220;
	cout << disLong << " long equals to " << disYard << " yard! " << endl;
	cin.get();
	return 0;
}