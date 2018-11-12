// C++ Primer Plus
// Ex 7_8b
// By Jiahe Zhang

//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>

struct expense
{
	double expenses[4];
};

const int Seasons = 4;
const char * Snames[4] =
    {"Spring", "Summer", "Fall", "Winter"};

void fill(expense * pa);
void show(expense da);
int main()
{
    expense e;
    fill(&e);
    show(e);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(expense * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*pa).expenses[i];
    }
}

void show(expense da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da.expenses[i] << '\n';
        total += da.expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
