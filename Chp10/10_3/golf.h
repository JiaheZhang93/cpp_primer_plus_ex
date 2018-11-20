// C++ Primer Plus
// Ex 10_3
// By Jiahe Zhang

// golf.h


class Golf
{
	static const int Len = 40;
	char fullname[Len];
	int handicap;
	
public:
	Golf();
	Golf(const char * name, int hc);
	int setgolf();
	void sethandicap(int hc);
	void showgolf() const;
};

