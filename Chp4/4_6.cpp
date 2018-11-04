// C++ Primer Plus
// Ex 4_6
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string brand;
	double weight;
	int cal;
};

int main()
{
	CandyBar snacks[3] =
	{
		{"Mocha Munch", 2.3, 350},
		{"C'est Bon", 1.5, 130},
		{"Kawaii", 5.0, 450}
	};
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Brand: " << snacks[i].brand << endl;
		cout << "Weight: " << snacks[i].weight << endl;
		cout << "Calorie: " << snacks[i].cal << endl;
		cout << endl;
	}
	
}