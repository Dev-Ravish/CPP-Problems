//In this type of inheritence only one child class inherits the elements of the parent class

#include<iostream>
using namespace std;

class Parent
{
public:
    int a;
    int b;
    int c;
};

class Child: public Parent
{
public:
    void setValue()
    {
        a=2;
        b=34;
        c=23;
    }

};

int main()
{
    Child cObject;
    cObject.setValue();
    cout<<"Values of a, b and c is:  "<<cObject.a<<"  "<<cObject.b<<"   "<<cObject.c;
}