/******************************************************************************
Important Note:
    We cannot swipe two different data type using template functions
    It is possible in c++ but we have to use a built-in comand named""static_cast". If you
    want to swap to different dataTypes with template.. You can learn about "static_cast".
    But simply its not possible and your code will give an error.
    2- The "static_cast code is commented below for your reference you can run it to see how it works"

*******************************************************************************/
//
/******************************************************************************
template <class T, class U>
void swap_2t (T& t, U& u)
{
    const T tmp = t;
    t = static_cast<T>(u);
    u = static_cast<U>(tmp);
}
int main(){
    int a = 10;
    float b = 2.5;
    swap_2t(a,b);

    return 0;
}

*******************************************************************************/
//
#include<iostream>

using namespace std;

template <class T>
void swapp(T&a,T&b)      //Function Template
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x1=4,y1=7;
    float x2=4.5,y2=7.5;

    cout<<"Before Swap:";
    cout<<"x1="<<x1<<endl<<"y1="<<y1<<endl;
    cout<<"x2="<<x2<<endl<<"y2="<<y2<<endl;

    swapp(x1,y1);
    swapp(x2,y2);

    cout<<"After Swap:";
    cout<<"x1="<<x1<<endl<<"y1="<<y1<<endl;
    cout<<"x2="<<x2<<endl<<"y2="<<y2<<endl;

    return 0;
}
