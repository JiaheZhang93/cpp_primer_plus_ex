// C++ Primer Plus
// Ex 11_5
// By Jiahe Zhang

// stonewt.cpp -- Stonewt methods
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::setMode(Mode m0)
{
	m = m0;
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
	return Stonewt(st.pounds + pounds);
}
Stonewt Stonewt::operator-(const Stonewt & st) const
{
	return Stonewt(pounds - st.pounds);
}
Stonewt Stonewt::operator*(double m) const
{
	return Stonewt(pounds * m);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	if (st.m == Stonewt::STONE)
		os << st.stone << " stone, " << st.pds_left << " pounds\n";
	else if (st.m == Stonewt::POUNDINT)
		os << (int)st.pounds << " pounds\n";
	else if (st.m == Stonewt::POUNDDOUBLE)
		os << st.pounds << " pounds\n";
	else
		os << "Wrong Mode!\n";
}
