// C++ Primer Plus
// Ex 8_1
// By Jiahe Zhang

#include <iostream>
using namespace std;

int cnt = 0;
void printStr(char *s, int n = 0);

int main()
{
	char a[80];
	cout << "Enter a string: " ;
	cin.getline(a, 80);
	
	cout << "Use printStr(a): " << endl;
	printStr(a);
	cout << "Use printStr(a, 1): " << endl;
	printStr(a, 1);
	cout << "Use printStr(a, 1): " << endl;
	printStr(a, 1);
	cout << "Use printStr(a, 0): " << endl;
	printStr(a, 0);
	cout << "Use printStr(a, 0): " << endl;
	printStr(a, 1);
}

void printStr(char s [], int n)
{
	if (!n)
		cout << s << endl;
	else
	{
		for (int i = 0; i < cnt; i++)
			cout << s << endl;
	}
	cnt ++;
}