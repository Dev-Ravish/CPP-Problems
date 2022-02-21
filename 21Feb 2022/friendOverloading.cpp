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

    //we can use keywor "friend" to make the function as friend of the class and thus scope reso;lution will not be required here.
    friend Complex operator +(Complex c1, Complex c2);
};

int main()
{
    Complex c1(4),c2;
    Complex sum=c1+c2;

    cout<<"sum of c1 and c2 is:  "<<sum.getReal()<<" + ("<<sum.getImainary()<<")i";
    
}

Complex operator +(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imaginary=c1.imaginary+c2.imaginary;
    return temp;
}