// C++ Primer Plus
// Ex 10_4
// By Jiahe Zhang

// sales.h

namespace SALES
{
    class Sales
    {
		static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
	public:
		Sales();
		Sales(const double ar[], int n);
		void setSales();
		void showSales() const;
    };

    
}