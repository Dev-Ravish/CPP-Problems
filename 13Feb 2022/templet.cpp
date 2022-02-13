#include<iostream>
using namespace std;

template<class T>

T sum( T a, T b)
{
    return a+b;
}

int main()
{
    cout<<"10    + 21    = "<<sum(10,21)<<endl;
    cout<<"2.23  + 123.2 = "<<sum(2.23f,123.2f)<<endl;
    cout<<"2.322 + 2.2   = "<<sum(2.322,2.2)<<endl;
}