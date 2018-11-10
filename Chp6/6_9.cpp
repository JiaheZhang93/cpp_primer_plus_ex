// C++ Primer Plus
// Ex 6_9
// By Jiahe Zhang

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct donor
{
	string name;
	double money;
};

int main()
{
	ifstream fin;
	fin.open("6_9_Input.txt");
	
	int n;
	fin >> n;
	fin.get();
	
	donor *d = new donor[n];
	
	for (int i = 0; i < n; i++)
	{
		getline(fin, d[i].name);
		fin >> d[i].money;
		fin.get();
	}
	
	cout << "Grand Patrons: " << endl;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i].money > 10000)
		{
			cout << d[i].name << endl;
			cnt ++;
		}
	}
	if (cnt == 0)
		cout << "none" << endl;
	
	cout << "Patrons: " << endl;
	cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i].money <= 10000)
		{
			cout << d[i].name << endl;
			cnt ++;
		}
	}
	if (cnt == 0)
		cout << "none" << endl;
}