//: C14:Car.cpp
// Public composition
#include<iostream>
using namespace std;

class Engine{
    public:
    void start(){
        cout<<"Engine shld start";
    }
};

class Wheel {
public:
  void count(){
  	cout<<"this car has four wheels";
  }
};



class Door {
public:
  //Window window;
  void slide()  {
  	cout<<"Should slide on demand"<<endl;}
  
};

class Car {
public:
  Engine engine;
  Wheel wheel;
  Door left, right; // 2-door
};

int main() {
  Car car;
  car.left.slide();
  car.wheel.count();
  return 0;
} ///:~
