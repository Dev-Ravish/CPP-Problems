#include<iostream>
using namespace std;

#define pi 3.14

int main()
{
    //  pi=12.2;   You cannot change the value of the varible which is defined as pi
    double r;
    cout<<"Enter the radius of the circle:  ";
    cin>>r;
    double area=pi*r*r;
    double circumference = 2*pi*r;
    cout<<"Area = "<<area<<endl;
    cout<<"Circumference = "<<circumference<<endl;
}
