// C++ Primer Plus
// Ex 4_10
// By Jiahe Zhang

#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<double, 3> score;
	
	cout << "Enter the scores of 3 times: ";
	cin >> score[0];
	cin >> score[1];
	cin >> score[2];
	
	int times = (score.end() - score.begin());
	double average = (score[0] + score[1] + score[2]) / times;
	
	cout << times << " Times." << endl;
	cout << "Average score: " << average << endl;
}