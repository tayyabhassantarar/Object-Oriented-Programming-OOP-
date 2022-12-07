#include <iostream>
using namespace std;
 
class Complex
{
private:
    int real;
public:
    Complex(int r = 0)
    {  real = r;}
    friend ostream & operator << (ostream &out,  Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
};
 
ostream & operator << (ostream &out,  Complex &c)
{
    out << c.real;
    return out;
}
 
istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    return in;
}
 
int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   return 0;
}
