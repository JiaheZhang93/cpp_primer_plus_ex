// C++ Primer Plus
// Ex 8_6
// By Jiahe Zhang

#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T * arr, int n);

template <> char * maxn<char *>(char ** arr, int n);

int main()
{
	int arrInt[6] {1, 2, 3, 9, 4, 7};
	double arrDouble[4] {1.2, 5.0, 8.8};
	const char *arrStr[5] = {"Come on!", "Go away", "Merci", "Kawaii", "Au revoir"};
	
	cout << "The max value of int array is: " << maxn(arrInt, 6) << endl;
	cout << "The max value of the double array is: " << maxn(arrDouble, 4) << endl;
	cout << "The max value of the char * array is: " << maxn(arrStr, 5) << endl;
}

template <typename T>
T maxn(T * arr, int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

template <> char * maxn(char ** arr, int n)
{
	int maxIdx = 0;
	int maxLen = strlen(arr[0]);
	for (int i = 1; i < n; i++)
	{
		if (strlen(arr[i]) > maxLen)
		{
			maxLen = strlen(arr[i]);
			maxIdx = i;
		}
	}
	return arr[maxIdx];
}