// C++ Primer Plus
// Ex 3_4
// By Jiahe Zhang

#include <iostream>
#include <cmath>
using namespace std;

const int HMS_FACTOR = 60;
const int DAY_HOURS = 24;

int main()
{
	long long seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	
	int sec, min, hour, day;
	sec = seconds % HMS_FACTOR;
	min = seconds / HMS_FACTOR % HMS_FACTOR;
	hour = seconds / HMS_FACTOR /HMS_FACTOR % DAY_HOURS;
	day = seconds / HMS_FACTOR / HMS_FACTOR / DAY_HOURS;
	
	cout << seconds << " seconds = " << day << " days, " << hour << 
		" hours, " << min << " minutes, " << sec << " seconds" << endl;
}