// C++ Primer Plus
// Ex 10_1
// By Jiahe Zhang

// main.cpp

#include <iostream>
#include <string>
#include "account.h"

int main()
{
	Account my("Bill Gates", "123456789", 123456.78);
	my.show();
	my.deposit(100);
	my.show();
	my.deposit(-100);
	my.show();
	my.draw(200);
	my.show();
	my.draw(133456.55);
	my.show();
}