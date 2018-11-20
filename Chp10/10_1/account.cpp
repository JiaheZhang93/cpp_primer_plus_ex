// C++ Primer Plus
// Ex 10_1
// By Jiahe Zhang

// account.cpp
#include <iostream>
#include <string>
#include "account.h"
using namespace std;

Account::Account(string name_, string id_, double balance_)
{
	fullname = name_;
	id = id_;
	balance = balance_;
}

void Account::show() const
{
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(2);
	
	cout << "Name: " << fullname <<endl;
	cout << "Account ID: " << id << endl;
	cout << "Balance: $" << balance << endl;
	cout << endl;
	
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

bool Account::deposit(double m)
{
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(2);
	
	cout << "Deposit $" << m << endl;
	if (m <= 0)
	{
		cout << "Error! Deposit value must be positive! " << endl;
		return false;
	}
	
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
	
	balance += m;
	return true;
}

bool Account::draw(double m)
{
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(2);
	
	cout << "Draw $" << m << endl;
	if (m <= 0)
	{
		cout << "Error! Draw value must be positive! " << endl;
		return false;
	}
	if (m > balance)
	{
		cout << "Error! You can't get money more than you have! " << endl;
		return false;
	}
	
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
	
	balance -= m;
	return true;
}