// C++ Primer Plus
// Ex 4_9
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
	CandyBar *pSnacks = new CandyBar[3];
	pSnacks[0] = {"Mocha Munch", 2.3, 350};
	pSnacks[1] = {"C'est Bon", 1.5, 130};
	pSnacks[2] = {"Kawaii", 5.0, 450};
	
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Brand: " << pSnacks[i].brand << endl;
		cout << "Weight: " << pSnacks[i].weight << endl;
		cout << "Calorie: " << pSnacks[i].cal << endl;
		cout << endl;
	}
	
}