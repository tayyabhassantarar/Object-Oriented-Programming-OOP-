// Lecture 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Simple Pointer exercise
/*#include <iostream>
using namespace std;
int main()
{
    int a; // a is an integer
    int* aPtr; // aPtr is an int * which is apointer to an integer
    a = 7;// assigned 7 to a
    aPtr = &a; // assign the address of a to aPtr
    cout << "The address of a is " << &a
        << "\nThe value of aPtr is " << aPtr; //no operator show address of pointed variable
    cout << "\n\nThe value of a is " << a      
        << "\nThe value of *aPtr is " <<*aPtr; //* show value of pointed variable
    cout << "\n\nShowing that * and & are inverses of"<<"each other.\n &*aPtr = " << &*aPtr    
        << "\n*&aPtr =" <<*&aPtr
        << endl;
    cout << "Address of pointer aPtr= " << &aPtr<<endl;
    
    return 0;
}*/
// Pointer With Functions

/*#include <iostream>
;
void cubeByReference(int*);// prototype
using namespace std;
int main()
{
    int number = 5;
    cout << "The original value of number is " << number;
    cubeByReference(&number); // pass number address to cubeByReference
    cout << "\nThe new value of number is " << number << endl;
} // end main
// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int* nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}// end function cubeByReference
*/