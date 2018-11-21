// C++ Primer Plus
// Ex 10_5
// By Jiahe Zhang

// main.cpp -- testing the Stack class
#include <iostream>
#include <cctype>  // or ctype.h
#include "stack.h"
int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    customer po;
	double total = 0;
    cout << "Please enter A to add an element,\n"
        << "P to process an element, or Q to quit.\n";
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
             case 'a': cout << "Enter a customer name to add: ";
                       cin.getline(po.fullname, 35);
					   cout << "Enter the customer's payment: ";
                       cin >> po.payment;
					   cin.get();
                       if (st.isfull())
                           cout << "stack already full\n";
                       else
                           st.push(po);
                       break;
             case 'P':
             case 'p': if (st.isempty())
                           cout << "stack already empty\n";
                       else {
                           st.pop(po);
						   total += po.payment;
                           cout << "Total payment is $" << total << ".\n";
                       }
                       break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0; 
}
