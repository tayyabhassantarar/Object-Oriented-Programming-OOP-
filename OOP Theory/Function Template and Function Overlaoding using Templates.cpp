#include<iostream>
using namespace std;
template<class T>
class Test{
	public:
		T test1;
		Test(T a){
			test1 = a;
		}
		void display();
};
template <class T>
void Test<T>::display(){
	cout<<test1<<endl;
	
}
template <class T, class T1>
float avergae(T a, T1 b){
    float c = (a+b)/2.0;
    return c;
}
// Function overloading will start from here
void show(int a){
    cout<<"Value of a normal fucntion a ="<<a<<endl;
}
template<class T>
void show(T a){
    cout<<"This is a templatised function a = "<<a<<endl;
}

// Function overloading end here

int main(){
	Test<float> t(5.7);
	t.display();
	cout<<avergae(5.2,6)<<endl;
	show(5);// Exact copy will be run if you pass same data type parameter during function overloading task. 
	show(5.7); // This time templatuised function will be called because we are providing float as a parameter 
	show('c'); // templatised function will be called  bcs this is not an exact copy
	
}
