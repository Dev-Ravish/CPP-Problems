#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;
public:
    Complex(int r=0, int i=0)
    {
        real=r;
        imaginary=i;
    }
    int getReal()
    {
        return real;
    }
    int getImainary()
    {
        return imaginary;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }
};

int main()
{
    Complex c1(5,6),c2(4,-8);
    Complex sum=c1+c2;

    cout<<"sum of c1 and c2 is:  "<<sum.getReal()<<" + ("<<sum.getImainary()<<")i";
    
}