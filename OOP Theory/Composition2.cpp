#include<iostream>
using namespace std;
class Engine{
	public:
		void start(){
			cout<<"Engine has started:"<<endl;
		}
};
class Wheel{
	public:
		void count(){
			cout<<"This car has four wheels:"<<endl;
		}
};
class Window{
	public:
		void slide(){
			cout<<"Window slide left to right:"<<endl;
		}
};
class Door{
	public:
		Window window;
		void open(){
			cout<<"Door has oppened:"<<endl;
		}
};
class Car{
	public:
		Engine eng;
		Wheel wheel;
		Door left, right;
};

int main(){
	Car car;
	car.eng.start();
	car.left.open();
	car.right.window.slide();
	
	return 0;
}
