// C++ Primer Plus
// Ex 6_4
// By Jiahe Zhang

#include <iostream>
using namespace std;

const int strsize = 80;
void menu();

struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main()
{
	bop users[3] = 
	{
		{"Wimp Macho", "Worker", "You can you up!", 0},
		{"Raki Rhodes", "Engineer", "Good good study!", 1},
		{"Little Ming", "Student", "Go out!", 2}
	};
	
	
	menu();
	char ch;
	cout << "Enter your choice: ";
	cin >> ch;
	while (ch != 'q')
	{
		if (ch == 'a')
		{
			for (bop u : users)
				cout << u.fullname << endl;
		}
		else if (ch == 'b')
		{
			for (bop u : users)
				cout << u.title << endl;
		}
		else if (ch == 'c')
		{
			for (bop u : users)
				cout << u.bopname << endl;
		}
		else if (ch == 'd')
		{
			for (bop u : users)
				switch (u.preference)
				{
					case 0: cout << u.fullname << endl; break;
					case 1: cout << u.title << endl; break;
					case 2: cout << u.bopname << endl; break;
					default: cout << "Wrong preference value" << endl;
				}
		}
		else
			cout << "Wrong input value! " << endl;
		
		cout << "Next Choice: ";
		cin >> ch;
	}
	cout << "Bye!" << endl;
}

void menu()
{
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name     b. display by title\n";
	cout << "c. display by bopname  d. display by preference\n";
	cout << "q. quit\n";
}