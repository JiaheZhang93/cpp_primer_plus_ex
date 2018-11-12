// C++ Primer Plus
// Ex 7_2
// By Jiahe Zhang

#include <iostream>
using namespace std;

const int MAX = 10;

int inputArray(double a []);
void showArray(const double *a, int n);
double getMean(const double a [], int n);

int main()
{
	double score[MAX] {};
	
	int n = inputArray(score);
	showArray(score, n);
	double mean = getMean(score, n);
	
	cout << "The mean score is " << mean << endl;
	
}

int inputArray(double a [])
{
	cout << "Enter the scores one by one! (Enter any non-number for quit)" << endl;
	int i;
	for (i = 0; i < MAX; i++)
	{
		cout << "Enter a score: " ;
		double tmp;
		cin >> tmp;
		if (!cin)
			break;
		a[i] = tmp;
	}
	
	return i;
}

void showArray(const double *a, int n)
{
	cout << "Now show the scores !" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Score #" << i + 1 << ": " << a[i] << endl;
	}
}

double getMean(const double a [], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}