// C++ Primer Plus
// Ex 6_2
// By Jiahe Zhang

#include <iostream>
#include <array>
using namespace std;

const int MAX = 10;

int main()
{
	array<double, MAX> d;
	
	double sum = 0, donation;
	int i = 0;
	
	cout << "Enter #1: ";
	while (i < MAX && cin >> donation)
	{
		d[i] = donation;
		sum += donation;
		if (++i < MAX)
			cout << "Enter #" << i + 1 << ": " ;
	}
	
	double average;
	if (i == 0)
		average = 0;
	else
		average = sum / i;
	
	int cnt = 0;
	for (int j = 0; j < i; j++)
	{
		if (d[j] > average)
			cnt ++;
	}
	
	cout << "The average value is : " << average << endl;
	cout << cnt << " is larger than average." << endl;
}