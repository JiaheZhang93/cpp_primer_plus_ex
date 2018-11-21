// C++ Primer Plus
// Ex 10_8
// By Jiahe Zhang

// main.cpp -- testing the List class
#include <iostream>
#include "list.h"

void square(Item & it) { it = it * it;}

int main()
{
    using namespace std;
    List li; // create an empty List
    char ch;
    Item e;
    cout << "Please enter A to add an element,\n"
        << "S to determine the square of one element, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')   
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
             case 'a': cout << "Enter an element: ";
                       cin >> e;
                       if (li.isfull())
                           cout << "stack already full\n";
                       else
                           li.add(e);
					   li.show();
                       break;
             case 'S':
             case 's': cout << "Enter a index: ";
					   int i;
					   cin >> i;
					   cin.get();
					   li.visit(i, square);
					   li.show();
                       break;
        }
        cout << "Please enter A to add an element,\n"
			<< "S to determine the square of one element, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0; 
}