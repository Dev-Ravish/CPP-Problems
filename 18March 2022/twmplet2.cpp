#include<iostream>
using namespace std;

template <class T, class U>
void sum(T x, U y)
{
    cout<<"Sum = "<<x+y<<endl;
}

template <class T, class U>
void multiplication(T x, U y)
{
    cout<<"Multiplication = "<<x*y<<endl;
}

template <class T, class U>
void division(T x, U y)
{
        if(y==0)
            throw 101;
    cout<<"Deivision = "<<x/y<<endl;
}

template <class T, class U>
void difference(T x, U y)
{
    cout<<"Diference = "<<x-y<<endl;
}

int main()
{
    int numOne; double numTwo;
    cout<<"Enter any two number: ";
    cin>>numOne>>numTwo;
    sum(numOne,numTwo);
    difference(numOne,numTwo);
    multiplication(numOne,numTwo);
    try
    {

        division(numOne,numTwo);
    }
    catch(int e)
    {
        cout<<endl<<"\nWARNING !!!"<<endl;
        cout<<"Division with 0 is not possible."<<endl;
        cout<<"error code: "<<e<<endl<<endl;
    }

}