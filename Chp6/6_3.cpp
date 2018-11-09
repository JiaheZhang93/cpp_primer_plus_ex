// C++ Primer Plus
// Ex 6_3
// By Jiahe Zhang

#include <iostream>
using namespace std;

void menu();

int main()
{
	menu();
	char ch;
	while (cin >> ch)
	{
		switch (ch)
		{
			case 'c': cout << "You chose carnivore." << endl; break;
			case 'p': cout << "You chose pianist." << endl; break;
			case 't': cout << "A maple is a tree." << endl; break;
			case 'g': cout << "You chose game." << endl; break;
			default:
				cout << "Please enter a c, p, t, or g: ";
				continue;
		}
		break;
	}
}

void menu()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore    p) pianist\n";
	cout << "t) tree         g) game\n";
}