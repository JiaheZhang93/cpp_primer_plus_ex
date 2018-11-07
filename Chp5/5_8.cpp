// C++ Primer Plus
// Ex 5_8
// By Jiahe Zhang

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[80];
	int cnt = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	
	cin >> word;
	
	while (strcmp(word, "done"))
	{
		cnt++;
		cin >> word;
	}
	cout << "You entered a total of " << cnt << " words." << endl;
}