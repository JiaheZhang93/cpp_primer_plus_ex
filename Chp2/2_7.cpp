// C++ Primer Plus
// Ex 2_7
// By Jiahe Zhang

#include <iostream>
using namespace std;

void displayTime(int H, int M);

int main()
{
	int H, M;
	cout << "Enter the number of hours: ";
	cin >> H;
	cout << "Enter the number of minutes: ";
	cin >> M;
	displayTime(H, M);
}

void displayTime(int H, int M)
{
	cout << "Time: "<< H << ":" << M << endl;
}