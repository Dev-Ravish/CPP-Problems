//in multi level inheritance, the is child class of the child child class of parent class.

//Hierarchical inheritance is the type in which more than once child class accesses the elements of the parent class.

#include<iostream>
using namespace std;

class Parent
{
public:
    int a, b, c;
};

class Child: public Parent
{
public:
    void setValues()
    {
        a=1;
        b=2;
        c=3;
    }
};

class GrandChild: public Child
{
public:
    void setValues()
    {
        a=4;
        b=5;
        c=6;
    }
};

class GreatGrandChild: public GrandChild
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
    Child c1;
    c1.setValues();
    cout<<"Values of a, b and c when ChildOne sets the value:  "<<c1.a<<"  "<<c1.b<<"  "<<c1.c<<endl;
    GrandChild c2;
    c2.setValues();
    cout<<"Values of a, b and c when ChildTwo sets the value:  "<<c2.a<<"  "<<c2.b<<"  "<<c2.c<<endl;
    GreatGrandChild c3;
    c3.setValues();
    cout<<"Values of a, b and c when ChildThree sets the value:  "<<c3.a<<"  "<<c3.b<<"  "<<c3.c<<endl;
}