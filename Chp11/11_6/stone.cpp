// C++ Primer Plus
// Ex 11_6
// By Jiahe Zhang


// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using namespace std;
#include "stonewt.h"
int main()
{
    Stonewt ar[6] {123, 208.7, 55};
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the pounds of element #" << i + 4 << " : " ;
		double tmp;
		cin >> tmp;
		ar[i+3] = Stonewt(tmp);
	}
	Stonewt eleven(154); // 11 Stone
	int minIdx = 0;
	int maxIdx = 0;
	int over11cnt = 0;
	for (int i = 0; i < 6; i++)
	{
		if (ar[i] < ar[minIdx])
			minIdx = i;
		if (ar[i] > ar[maxIdx])
			maxIdx = i;
		if (ar[i] > eleven)
			over11cnt++;
	}
	
	cout << "The min element is : ";
	ar[minIdx].show_stn();
	cout << "The max element is : ";
	ar[maxIdx].show_stn();
	cout << "The number of elements over 11 stone is " << over11cnt << endl;
    // std::cin.get();
    return 0;
}

