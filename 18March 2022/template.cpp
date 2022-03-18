#include<iostream>
using namespace std;

template <class T>
T sum(T x, T y)
{
    return x+y;
}

template <class T>
T multiplication(T x, T y)
{
    return x*y;
}

template <class T>
T division(T x, T y)
{
    if (y==0)
        throw 101;
    return x/y;
}

template <class T>
T difference(T x, T y)
{
    return x-y;
}

int main()
{
    int numOne, numTwo;
    cout<<"Enter any two number: ";
    cin>>numOne>>numTwo;

    cout<<"Sum = "<<sum(numOne,numTwo)<<endl;
    cout<<"Multiplication = "<<multiplication(numOne,numTwo)<<endl;
     try
    {

         cout<<"Division = "<<division(numOne,numTwo)<<endl;
    }
    catch(int e)
    {
        cout<<endl<<"\nWARNING !!!"<<endl;
        cout<<"Division with 0 is not possible."<<endl;
        cout<<"error code: "<<e<<endl<<endl;
    }

    cout<<"Diference = "<<difference(numOne,numTwo)<<endl;
}