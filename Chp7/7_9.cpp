// C++ Primer Plus
// Ex 7_9
// By Jiahe Zhang

#include <iostream>

using namespace std;

const int Slen = 30;
struct student {
    char fullname[Slen];
    char hobby[Slen];
    int ooplevel;
};

// prototype
int getinfo(student pa [], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa [], int n);

int main(void)
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;

    while(cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    
    for(int i = 0; i < entered; ++i)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete [] ptr_stu;
    cout << "Done" << endl;

    return 0;
}

int getinfo(student pa [], int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Student #" << i + 1 << ": " << endl;
		cout << "Enter the full name: ";
		cin.getline(pa[i].fullname, Slen);
		if (!pa[i].fullname[0])
			break;
		cout << "Enter the hobby: ";
		cin.getline(pa[i].hobby, Slen);
		cout << "Enter the ooplevel: ";
		cin >> pa[i].ooplevel;
		cin.get();
		cout << endl;
		cnt++;
	}
	return cnt;
}

void display1(student st)
{
	cout << "Full Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	cout << "Full Name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa [], int n)
{
	for(int i = 0; i < n; ++i)
    {
        display1(pa[i]);
    }
}