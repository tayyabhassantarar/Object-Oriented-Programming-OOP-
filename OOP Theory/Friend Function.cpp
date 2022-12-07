#include <iostream>
using namespace std;
 
class Complex
{
	private:
		int r;
	public:
		Complex(){
			r = 0;
		}
		void display(){
			cout<<"Display R:"<<r<<endl;
		}
		friend void display2(Complex &c);
};
void display2(Complex &c){
	c.r= c.r+10;
}
int main(){
	Complex obj;
	obj.display();
	cout<<"Friend function return:"<<endl;
	display2(obj);
	obj.display();
	return 0;
}
