// C++ Primer Plus
// Ex 10_1
// By Jiahe Zhang

// account.h
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
using namespace std;

class Account
{
	string fullname;
	string id;
	double balance;
	
public:
	Account(string name_, string id_, double balance_ = 0.0);
	void show() const;
	bool deposit(double m);
	bool draw(double m);
};

#endif