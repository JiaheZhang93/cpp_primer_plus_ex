// C++ Primer Plus
// Ex 11_5
// By Jiahe Zhang

// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"

int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);
	
	incognito.setMode(Stonewt::STONE);
	wolfe.setMode(Stonewt::POUNDDOUBLE);
	taft.setMode(Stonewt::POUNDINT);

    cout << "The celebrity weighed ";
    cout << incognito;
    cout << "The detective weighed ";
    cout << wolfe;
    cout << "The President weighed ";
    cout << taft;
	
	Stonewt alittle(10);
    incognito = incognito + alittle;
	wolfe = wolfe * 2;
    taft = taft - 5; 
	
	incognito.setMode(Stonewt::STONE);
	wolfe.setMode(Stonewt::POUNDDOUBLE);
	taft.setMode(Stonewt::POUNDINT);
	
    cout << "After +10, the celebrity weighed ";
    cout << incognito;
	cout << "After *2, the detective weighed ";
    cout << wolfe;
    cout << "After -5, the President weighed ";
    cout << taft;

    // std::cin.get();
    return 0;
}
