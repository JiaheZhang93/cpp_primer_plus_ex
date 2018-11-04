// C++ Primer Plus
// Ex 4_3
// By Jiahe Zhang

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char firstName[20];
	char lastName[20];
	
	cout << "Enter your first name: ";
	cin.getline(firstName, 20);
	cout << "Enter your last name: ";
	cin.getline(lastName, 20);
	
	char name[40];
	
	strcpy(name, lastName);
	strcat(name, ", ");
	strcat(name, firstName);
	
	cout << "Here's the information in a single string: " << name << endl;
}
