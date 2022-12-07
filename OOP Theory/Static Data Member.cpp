#include<iostream>
using namespace std;
class Test{
	int a;  // normal data memebr whose copy will be stored in each object of class separately;
	static int count;  // static data member which will be shared by each object
	public:
		void getVal(int);   //Declaration of a data function which we will define outside the class
		void displayVAlue(void);  //Declaration of a data function which we will define outside the class
};
int Test::count ;
void Test::getVal(int x){
	a = x;  // a = 100
	cout<<"Value of a:"<<a<<endl;   //100
	++count;  // increment value of count
	cout<<count<<endl;
	// 0
	
}
void Test::displayVAlue(){
	cout<<"value of counter:"<<count<<endl;  // display value of count taht we have increment in getVal():
	
}


int main(){
	Test t, t1, t2, t3;
	t.displayVAlue();
	t1.displayVAlue();
	t2.displayVAlue();
	t.getVal(100);//
	t1.getVal(200);
	t2.getVal(300);
	t3.getVal(400);
	t.displayVAlue();
	t1.displayVAlue();
	t2.displayVAlue();
	t3.displayVAlue();
}
