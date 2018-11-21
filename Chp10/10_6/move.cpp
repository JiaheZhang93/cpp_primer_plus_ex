// C++ Primer Plus
// Ex 10_6
// By Jiahe Zhang

// move.cpp

#include <iostream>
#include "move.h"
using namespace std;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

Move Move::add(const Move & m) const
{
	return Move(m.x + x, m.y + y);
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}