// C++ Primer Plus
// Ex 6_7
// By Jiahe Zhang

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() 
{
	cout << "Enter words (q to quit): " << endl;
	char word[80];
	
	int vowels = 0;
	int consonants = 0;
	int others = 0;
	
	while (cin >> word)
	{
		if (!strcmp(word, "q"))
			break;
		char first = (char) tolower(word[0]);
		if (isalpha(first))
		{
			switch (first)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u': vowels++; break;
				default: consonants++; break;
			}
		}
		else
			others++;
	}
	
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << others << " others" << endl;
}