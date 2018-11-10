// C++ Primer Plus
// Ex 6_6
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

struct donor
{
	string name;
	double money;
};

int main()
{
	cout << "Enter the number of donors: " ;
	int n;
	cin >> n;
	cin.get();
	
	donor *d = new donor[n];
	
	for (int i = 0; i < n; i++)
	{
		cout << "#" << i + 1 << ": " << endl;
		cout << "Enter the name: " ;
		getline(cin, d[i].name);
		cout << "Enter the money: " ;
		cin >> d[i].money;
		cin.get();
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