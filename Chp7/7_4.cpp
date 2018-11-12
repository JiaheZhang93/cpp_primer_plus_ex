// C++ Primer Plus
// Ex 7_3
// By Jiahe Zhang

// lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total(47), choices(5);
    cout << "You have one chance in ";
    cout << probability(total, choices);      // compute the odds
    cout << " of winning.\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0 * 27;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}
