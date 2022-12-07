#include<iostream>
using namespace std;
class Test{
	public:
		int x;
		static int y;
	public:
		void display(){
			cout<<"VAlue of x:"<<x<<endl;
		//	cout<<"VAlue of y which is static:"<<y<<endl;
		}
		static void display1(){
			cout<<"AVlue of y"<<y<<endl;
		}
};
int Test::y;
int main(){
	Test t;
	t.x= 10;
	t.y= 20;
//	t.display();
	Test t1;
	t1.x = 20;
	t1.y = 30;
	t.display();
	Test::display1();
	return 0;
}
