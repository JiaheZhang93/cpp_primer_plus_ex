// C++ Primer Plus
// Ex 7_6
// By Jiahe Zhang

#include <iostream>
using namespace std;

int Fill_array(double arr [], int limit);
void Show_array(const double arr [], int len);
void Reserve_array(double arr [], int len); 

int main()
{
	const int limit = 10;
	double arr[limit];
	int len = Fill_array(arr, limit);
	cout << endl;
	Show_array(arr, len);
	cout << "\nReverse the array: " << endl;
	Reserve_array(arr, len);
	Show_array(arr, len);
	cout << "\nReverse the array except the first and last element: " << endl;
	Reserve_array(arr + 1, len - 2);
	Show_array(arr, len);
}

int Fill_array(double arr [], int limit)
{
	double tmp;
	int cnt = 0;
	cout << "Enter a number: " ;
	while (cnt < limit and cin >> tmp)
	{
		arr[cnt] = tmp;
		cnt ++;
		cout << "Enter a number: " ;
	}
	return cnt;
}

void Show_array(const double arr [], int len)
{
	cout << "Here is the array: " << endl;
	for (int i = 0;i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Reserve_array(double arr [], int len)
{
	for (int i = 0;i < len / 2; i++)
	{
		double tmp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = tmp;
	}
}