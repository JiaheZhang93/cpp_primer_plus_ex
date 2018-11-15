// C++ Primer Plus
// Ex 8_3
// By Jiahe Zhang

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string & toUpper(string &s);

int main()
{
	string tmp;
	cout << "Enter a string (q to quit): ";
	while(getline(cin, tmp) and tmp != "q")
	{
		cout << toUpper(tmp) << endl;
		cout << "Enter a string (q to quit): ";
	}
	cout << "Bye!" << endl;
}

string & toUpper(string &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = (char) toupper(s[i]);
	}
	return s;
}
