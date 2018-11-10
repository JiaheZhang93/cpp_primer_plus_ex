// C++ Primer Plus
// Ex 6_8
// By Jiahe Zhang

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("6_8_Input.txt");
	
	char ch;
	int cnt = 0;
	while (fin.get(ch))
	{
		cnt ++;
		// cout << ch;
	}
	
	cout << cnt << " characters in the file." ;
}