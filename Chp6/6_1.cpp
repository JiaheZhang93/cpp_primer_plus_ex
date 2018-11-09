// C++ Primer Plus
// Ex 6_1
// By Jiahe Zhang

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter something end with @:\n";
	
	char ch;
	
	while(cin.get(ch))
	{
		if (ch == '@')
			break;
		else if (isdigit(ch))
			continue;
		else if (isupper(ch))
			cout << (char) tolower(ch);
		else if (islower(ch))
			cout << (char) toupper(ch);
		else
			cout << ch;
		
	}
	
	cout << "\nFinished!" << endl;
}