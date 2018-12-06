// C++ Primer Plus
// Ex 11_3
// By Jiahe Zhang

// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
	unsigned long minstep = -1;
	unsigned long maxstep = 0;
	unsigned long sumstep = 0; 
	int N;
	int cnt = 0;
	cout << "Enter the total times of test: ";
	cin >> N;
	cin.get();
	if (N <= 0)
	{
		cout << "Nothing to do!" << endl;
		return 0;
	}
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        //cout << "After " << steps << " steps, the subject "
            //"has the following location:\n";
		if (steps > maxstep) maxstep = steps;
		if (steps < minstep or minstep == -1) minstep = steps;
		sumstep += steps;
        //cout << result << endl;
        result.polar_mode();
        steps = 0;
        result.reset(0.0, 0.0);
		cnt++;
		if (cnt >=N) break;
        cout << "Enter target distance (q to quit): ";
    }
	cout << "\nResult: " << endl;
	cout << "The max step: " << maxstep << endl;
	cout << "The min step: " << minstep << endl;
	cout << "The avarage step: " << sumstep * 1.0 / N << endl;
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
