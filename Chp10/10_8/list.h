// C++ Primer Plus
// Ex 10_8
// By Jiahe Zhang

// list.h

#ifndef LIST_H_
#define LIST_H_

typedef double Item;

class List
{
private:
	static const int MAX = 10;
	int size = 0;
	Item data[MAX];
public:
	void add(const Item &);
	bool isfull();
	bool isempty();
	void visit(int, void (*pf)(Item &));
	void show() const;
};

#endif