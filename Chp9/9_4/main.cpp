// C++ Primer Plus
// Ex 9_4
// By Jiahe Zhang

// main.cpp
#include <iostream>
#include "sales.h"
using namespace std;

int main()
{
	using namespace SALES;
	Sales s1, s2;
	setSales(s1);
	double saleData[3] {200, 19.2, 1080.12};
	setSales(s2, saleData, 3);
	
	showSales(s1);
	showSales(s2);
}