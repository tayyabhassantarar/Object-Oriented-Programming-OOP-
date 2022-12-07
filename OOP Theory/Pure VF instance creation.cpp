#include <iostream>
using namespace std;

class Base
{
public:
	virtual void display() = 0;
};


class der1: public Base
{
public:
	void display()
	{
		cout << "Derived class 1 called \n";
	}
};


class der2:public Base
{
public:
	void display()
	{
		cout << "Derived class 2 called \n";
	}
};
int main()
{
	Base *ptr[2];


	der1 d1;
	ptr[0] = &d1;
	ptr[0]->display();

	der2 d2;
	ptr[1] = &d2;
	ptr[1]->display();

	system("pause");
	return 0;
}
