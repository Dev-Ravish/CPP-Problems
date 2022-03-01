//Hierarchical inheritance is the type in which more than once child class accesses the elements of the parent class.

#include<iostream>
using namespace std;

class Parent
{
public:
    int a, b, c;
};

class ChildOne: public Parent
{
public:
    void setValues()
    {
        a=1;
        b=2;
        c=3;
    }
};

class ChildTwo: public Parent
{
public:
    void setValues()
    {
        a=4;
        b=5;
        c=6;
    }
};

class ChildThree: public Parent
{
public:
    void setValues()
    {
        a=7;
        b=8;
        c=9;
    }
};

int main()
{
    ChildOne c1;
    c1.setValues();
    cout<<"Values of a, b and c when ChildOne sets the value:  "<<c1.a<<"  "<<c1.b<<"  "<<c1.c<<endl;
    ChildTwo c2;
    c2.setValues();
    cout<<"Values of a, b and c when ChildTwo sets the value:  "<<c2.a<<"  "<<c2.b<<"  "<<c2.c<<endl;
    ChildThree c3;
    c3.setValues();
    cout<<"Values of a, b and c when ChildThree sets the value:  "<<c3.a<<"  "<<c3.b<<"  "<<c3.c<<endl;
}