// C++ Primer Plus
// Ex 3_5
// By Jiahe Zhang

#include <iostream>
using namespace std;

int main()
{
	long long world, us;
	cout << "Enter the world's population: ";
	cin >> world;
	cout << "Enter the population of the US: ";
	cin >> us;
	
	double ratio = 100.0 * us / world;
	
	cout << "The population of the US is " << ratio << "% of the world population." << endl;
}