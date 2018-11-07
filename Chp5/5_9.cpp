// C++ Primer Plus
// Ex 5_9
// By Jiahe Zhang

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int cnt = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	
	cin >> word;
	
	while (word != "done")
	{
		cnt++;
		cin >> word;
	}
	cout << "You entered a total of " << cnt << " words." << endl;
}