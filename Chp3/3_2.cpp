// C++ Primer Plus
// Ex 3_2
// By Jiahe Zhang

#include <iostream>
#include <cmath>
using namespace std;

const int INCH_FEET_FACTOR = 12;
const double INCH_METER_FACTOR = 0.0254;
const double POUND_KG_FACTOR = 2.2;

int main()
{
	int hFeet, hInch;
	double wPounds;
	
	cout << "Enter your height (feet): " ;
	cin >> hFeet;
	cout << "Enter your height (inch): ";
	cin >> hInch;
	cout << "Enter your weight (pounds): ";
	cin >> wPounds;
	
	double hMeter = (hFeet * INCH_FEET_FACTOR + hInch) * INCH_METER_FACTOR;
	double wKg = wPounds / POUND_KG_FACTOR;
	
	double BMI = wKg / pow(hMeter, 2);
	
	cout << "BMI: " << BMI << endl;
}