// C++ Primer Plus
// Ex 9_2
// By Jiahe Zhang

// static.cpp -- using a static local variable
#include <iostream>
#include <string>
using namespace std;

// function prototype
void strcount(string str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin)
    {
        if (input == "")		// string didn't fit!
            break;     // dispose of remainder
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(string str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = str.size();               // automatic local variable

    cout << "\"" << str <<"\" contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
