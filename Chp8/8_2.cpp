// C++ Primer Plus
// Ex 8_2
// By Jiahe Zhang

#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
{
	char name[80];
	double weight;
	int cal;
};

void setCandyBar(CandyBar &cb, const char * name = "Millenium Munch", double weight = 2.85, int cal = 350);
void display(const CandyBar &cb);

int main()
{
	CandyBar cb;
	
	cout << "Use setCandyBar(cb) : " << endl;
	setCandyBar(cb);
	display(cb);
	
	cout << "Use setCandyBar(cb, \"Bug Free\") : " << endl;
	setCandyBar(cb, "Bug Free");
	display(cb);
	
	cout << "Use setCandyBar(cb, \"Intel\", 1.22, 200) : " << endl;
	setCandyBar(cb, "Intel", 1.22, 200);
	display(cb);
}

void setCandyBar(CandyBar &cb, const char name [], double weight, int cal)
{
	strcpy(cb.name, name);
	cb.weight = weight;
	cb.cal = cal;
}

void display(const CandyBar &cb)
{
	cout << "Name: " << cb.name << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Cal: " << cb.cal << endl;
	cout << endl;
}