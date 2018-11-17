// C++ Primer Plus
// Ex 9_3
// By Jiahe Zhang

#include <iostream>
#include <cstring>
#include <new>
using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

const int BUFF = 100;
const int N = 2;
char buffer[BUFF];

int main()
{
	chaff * pc;
	pc = new (buffer) chaff[2];
	
	for (int i = 0; i < N; i++)
	{
		cout << "Input #" << i + 1 << ": " << endl;
		cout << "Enter dross: " ;
		cin.getline(pc[i].dross, 20);
		cout << "Enter slag: " ;
		cin >> pc[i].slag;
		cin.get();
	}
	cout << endl;
	
	for (int i = 0; i < N; i++)
	{
		cout << "#" << i + 1 << ": " << endl;
		cout << "Dross: " << pc[i].dross << endl;
		cout << "Slag: " << pc[i].slag << endl;
	}
}