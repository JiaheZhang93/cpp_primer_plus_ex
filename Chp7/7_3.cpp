// C++ Primer Plus
// Ex 7_3
// By Jiahe Zhang

#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showBox(box b);
void calcV(box *b);

int main()
{
	box b {"Google", 1.25, 6, 10};
	calcV(&b);
	showBox(b);
}

void showBox(box b)
{
	cout << "Maker: " << b.maker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width: " << b.width << endl;
	cout << "Length: " << b.length << endl;
	cout << "Volume: " << b.volume << endl;
}

void calcV(box *b)
{
	b->volume = b->height * b->width * b->length;
}