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
//		Complex operator +(Complex c){
//			Complex temp;
//			temp.real = real+ c.real;
//			temp.imag = imag+ c.imag;
//			return temp;
//		}
		bool operator <(Complex c){
			if(real<c.real && imag<c.imag){
				return true;
			}
			
			return false;
		}
		
		void display(){
			cout<<"Value of Real:"<<real<<endl;
			cout<<"Value of imag:"<<imag<<endl;
		}
		//unary oparetors 
};
int main(){
	Complex c(4,3), c2(1,5);
	if(c<c2)
		cout<<"c is less than c2:"<<endl;
	else
		cout<<"c is greater than c2:"<<endl;
	

	
	
	return 0;
}
