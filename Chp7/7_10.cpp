// C++ Primer Plus
// Ex 7_10
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

const string funcs[3] {"add", "mean", "multiply"};

double add(double x, double y);
double mean(double x, double y);
double mult(double x, double y);

double calcualte(double x, double y, double (*pf)(double, double));

int main()
{
	double (*pf[3])(double, double) {add, mean, mult};
	
	double x, y;
	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		for (int i = 0;i < 3; i++)
		{
			cout << funcs[i] << " result is " << calcualte(x, y, pf[i]) << endl;
		}
		cout << endl;
		cout << "Enter two numbers: ";
	}
	cout << "Done!" << endl;
}

double add(double x, double y)
{
	return x + y;
}
double mean(double x, double y)
{
	return (x + y) / 2;
}
double mult(double x, double y){
	return x * y;
}

double calcualte(double x, double y, double (*pf)(double, double))
{
	return pf(x, y);
}