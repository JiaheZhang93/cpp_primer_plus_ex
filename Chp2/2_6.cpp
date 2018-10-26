// C++ Primer Plus
// Ex 2_6
// By Jiahe Zhang

#include <iostream>
using namespace std;

double ly2au(double ly);

int main()
{
	cout << "Enter the number of light years: " ;
	double ly, au;
	cin >> ly;
	au = ly2au(ly);
	cout << ly << " light years = " << au << " astronomical units." << endl;
}

double ly2au(double ly)
{
	return 63240 * ly;
}