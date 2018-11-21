// C++ Primer Plus
// Ex 10_8
// By Jiahe Zhang

// list.cpp

#include <iostream>
#include "list.h"

void List::add(const Item & it)
{
	data[size++] = it;
}

bool List::isfull()
{
	return size == MAX;
}

bool List::isempty()
{
	return size == 0;
}

void List::visit(int i, void (*pf)(Item &))
{
	if (i >= size or i < 0)
		std::cout << "Out of Index! " << std::endl;
	pf(data[i]);
}

void List::show() const
{
	using std::cout;
	using std::endl;
	for (int i = 0; i < size; i++)
		cout << data[i] << " ";
	cout << endl;
}