// C++ Primer Plus
// Ex 4_2
// By Jiahe Zhang
// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
	string name, dessert;

    cout << "Enter your name:\n";
    getline(cin, name);  // reads through newline
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0; 
}