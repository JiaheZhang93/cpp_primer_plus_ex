// C++ Primer Plus
// Ex 4_8
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
	string name;
	double diameter;
	double weight;
};

int main()
{
	Pizza *p = new Pizza;
	
	cout << "Enter the company name: ";
	getline(cin, p->name);
	cout << "Enter the diameter: ";
	cin >> p->diameter;
	cout << "Enter the weight: ";
	cin >> p->weight;
	
	cout << "Name: " << p->name << endl;
	cout << "Diameter: " << p->diameter << endl;
	cout << "Weight: " << p->weight << endl;
}