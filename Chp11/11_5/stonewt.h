// C++ Primer Plus
// Ex 11_5
// By Jiahe Zhang

// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum Mode {STONE, POUNDINT, POUNDDOUBLE};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
	Mode m = STONE;
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
	void setMode(Mode m0);
	Stonewt operator+(const Stonewt & st) const;
	Stonewt operator-(const Stonewt & st) const;
	Stonewt operator*(double m) const;
	friend Stonewt operator*(double m, const Stonewt & st) {return st * m;}
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};
#endif
