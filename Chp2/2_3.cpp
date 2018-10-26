// C++ Primer Plus
// Ex 2_3
// By Jiahe Zhang

#include <iostream>
using namespace std;

void func1();
void func2();

int main()
{
	func1();
	func2();
	func2();
	
	cin.get();
	return 0;
}

void func1()
{
	cout << "Three blind mice" << endl;
	cout << "Three blind mice" << endl;
}

void func2()
{
	cout << "See how they run" << endl;
}