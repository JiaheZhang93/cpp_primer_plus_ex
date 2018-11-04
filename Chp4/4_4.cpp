// C++ Primer Plus
// Ex 4_4
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName, lastName, name;
	
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	
	name = lastName + ", " + firstName;
	
	cout << "Here's the information in a single string: " << name << endl;
}
