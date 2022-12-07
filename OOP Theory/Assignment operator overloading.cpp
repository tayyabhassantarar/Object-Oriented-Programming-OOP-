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
		Complex operator =(Complex c){
			real = c.real;
			imag = c.imag;
		}
		
		void display(){
			cout<<"Value of Real:"<<real<<endl;
			cout<<"Value of imag:"<<imag<<endl;
		}
		//unary oparetors 
};
int main(){
	Complex c(4,3), c2(1,5);
	cout<<"Display first object c:"<<endl;
	c.display();
	cout<<"Display second object c2:"<<endl;
	c2.display();
	c = c2;
	c.display();

	
	
	return 0;
}
