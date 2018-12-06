// C++ Primer Plus
// Ex 11_7
// By Jiahe Zhang


// complex0.cpp
#include "complex0.h"


complex::complex(double r, double i)
{
	real = r;
	imag = i;
}

complex complex::operator+(const complex & c) const
{
	return complex(real + c.real, imag + c.imag);
}

complex complex::operator-(const complex & c) const
{
	return complex(real - c.real, imag - c.imag);
}

complex complex::operator*(double m) const
{
	return complex(real * m, imag * m);
}

complex complex::operator*(const complex & c) const
{
	return complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

complex complex::operator~() const
{
	return complex(real, -imag);
}

std::ostream & operator<<(std::ostream & os, const complex & c)
{
	os << "(" << c.real << ", " << c.imag << "i)";
	return os;
}
std::istream & operator>>(std::istream & is, complex & c)
{
	using std::cout;
	double r, i;
	cout << "real: ";
	if (!(is >> r)) return is;
	cout << "imaginary: ";
	if (!(is >> i)) return is;
	c.real = r;
	c.imag = i;
	return is;
}