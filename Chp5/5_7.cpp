// C++ Primer Plus
// Ex 5_7
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

struct car
{
	string make;
	int year;
};

int main()
{
	int n;
	cout << "How many cars do you wish to catalog? ";
	cin >> n;
	cin.get(); // Drop the \n of number input !!!
	
	car *cars = new car[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Car #" << i + 1 << ":" <<endl;
		cout << "Please enter the make: ";
		getline(cin, cars[i].make);
		cout << "Please enter the year made: ";
		cin >> cars[i].year;
		cin.get();
	}
	
	cout << "Here is your collection: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << cars[i].year << " " << cars[i].make << endl;
	}
}