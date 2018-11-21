// C++ Primer Plus
// Ex 10_7
// By Jiahe Zhang

// plorg.h

#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	char name[20];
	int ci;
public:
	Plorg(const char * n = "Ploga", int c = 50);
	void setCi(int c);
	void report() const;
};

#endif