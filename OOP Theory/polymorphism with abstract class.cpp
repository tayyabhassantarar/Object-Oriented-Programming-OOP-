#include <iostream>
using namespace std;
class Shape
{
protected:
	float length;
	float width;
	float area;
public:
	Shape()
	{
		length = 0.0;
		width = 0.0;
	}
	Shape(float ln, float wd ,float ar)
	{
		length = ln;
		width = wd;
		area = ar;
	}
	virtual void CalArea() = 0;

};

class Triangle:public Shape
{
public:
	Triangle()
	{

	}
	Triangle(float ln, float wd)
	{
		length = ln;
		width = wd;
	}
	void CalArea()
	{
		area= (length*width)/2;
		cout << "Area of Triangle is: " << area << endl;
	}
};

class Square :public Shape
{
public:
	Square()
	{

	}
	Square(float ln)
	{
		length = ln;
	}


	void CalArea()
	{
		area = length * length;
		cout << "Area of Square is: " << area << endl;
	}
};
class Rectangle :public Shape
{
public:
	Rectangle()
	{

	}
	Rectangle (float ln, float wd)
	{
		length = ln;
		width = wd;
	}
	void CalArea()
	{
		area=  length * width;
		cout << "Area of Rectangle is: " << area << endl;
	}
};
class Circle :public Shape
{
public:
	Circle()
	{

	}
	Circle (float ln)
	{
		length = ln;
	}
	void CalArea()
	{
		area=  3.14* (length * length) ;
		cout << "Area of Circle is: " << area << endl;
	}
};

int main()
{
	float a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	Triangle tri(a,b);
	Square sq(a);
	Rectangle rec(a, b);
	Circle cir(a);

	Shape *ptr[4];
	ptr[0] = &tri;
	ptr[1] = &sq;
	ptr[2] = &rec;
	ptr[3] = &cir;


	ptr[0]->CalArea();
	ptr[1]->CalArea();
	ptr[2]->CalArea();
	ptr[3]->CalArea();

	system("pause");
	return 0;
}

