#include<iostream>
using namespace std;

class Complex{
	public:
		int real, imag;
		Complex(){
			real = 0;
			imag = 0;
		}
		Complex(int real, int imag){
			this->real = real;
			this->imag = imag;
		}
		Complex operator +(Complex c){
			Complex temp;
			temp.real = real+ c.real;
			temp.imag = imag+ c.imag;
			return temp;
		}
		void operator --(){
			--real;
		}
		void display(){
			cout<<"Value of Real:"<<real<<endl;
			cout<<"Value of imag:"<<imag<<endl;
		}
		//unary oparetors 
};
int main(){
//	int x = 0, y;
//	y = ++x;
//	
	
	
	Complex obj(3,5), obj1(1,2), obj2;
	obj2 = obj1+ obj;
//	--obj;
	obj2.display();
//	
	
	//int a = 0;
//	a++;
	//cout<<a++<<endl;
	//cout<<a;
	
	
	
	
	return 0;
}
