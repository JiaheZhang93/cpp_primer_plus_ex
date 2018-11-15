// C++ Primer Plus
// Ex 8_4
// By Jiahe Zhang

#include <iostream>
#include <cstring>

using namespace std;

struct stringy{
    char * str;
    int ct;
};

void set(stringy &str, const char * input);
void show(const stringy &str, int n = 1);
void show(const char a [], int n = 1);

int main(void)
{
    stringy beauy;
    char testing[] = "Reality isn't what it used to be.";

    set(beauy, testing);
    show(beauy);
    show(beauy, 3);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 2);
    show("Done!");

    return 0;
}

void set(stringy &str, const char * input)
{
	int size = strlen(input);
	str.str = new char[size];
	strcpy(str.str, input);
	str.ct = size;
}

void show(const stringy &str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str.str << endl;
}

void show(const char a [], int n)
{
	for (int i = 0; i < n; i++)
		cout << a << endl;
}