// C++ Primer Plus
// Ex 10_4
// By Jiahe Zhang

// main.cpp
#include <iostream>
#include "sales.h"
using namespace std;

int main()
{
	using namespace SALES;
	Sales s1, s2;
	s1.setSales();
	double saleData[3] {200, 19.2, 1080.12};
	s2 = Sales(saleData, 3);
	
	s1.showSales();
	s2.showSales();
}