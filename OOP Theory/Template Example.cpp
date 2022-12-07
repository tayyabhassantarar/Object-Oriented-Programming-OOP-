/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
template <class t>

class A{
	public:
		t var1;
		t var2;
		A(t a, t b){
			var1 = a;
			var2 = b;
			
		}
		t add(){
		    t c = var1 + var2;
		    return c;
		}
		void display(){
		    cout<<add()<<endl;
		}
};


int main(){
	A<int> a(3,5);
	a.add();
	A<float> b(2.5,21.3);
	b.add();
	a.display();
	b.display();
	
	
	return 0;
}
