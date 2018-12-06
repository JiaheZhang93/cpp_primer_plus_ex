// C++ Primer Plus
// Ex 11_7
// By Jiahe Zhang


// complex0.h
#ifndef COMPLEX0_H
#define COMPLEX0_H
#include <iostream>
class complex
{
private:
	double real;
	double imag;
public:
	complex(double r = 0, double i = 0);
	complex operator+(const complex & c) const;
	complex operator-(const complex & c) const;
	complex operator*(double m) const;
	complex operator*(const complex & c) const;
	complex operator~() const;
	friend complex operator*(double m, const complex & c) {return c * m;}
	friend std::ostream & operator<<(std::ostream & os, const complex & c);
	friend std::istream & operator>>(std::istream & is, complex & c);
};
#endif