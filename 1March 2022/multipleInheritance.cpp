//multiple inheritance is the type in whcich a class inherits the functionality from more than one parent class.
#include<iostream>
using namespace std;

class ParentOne
{
public:
    int l1, b1;
    int sum(){return l1+b1;}

};

class ParentTwo
{
public:
    int l2, b2;
    int product(){return l2*b2;}
};

class child: public ParentOne, public ParentTwo
{
public:

    void display()
    {
        l1=2;
        b1=4;
        l2=23;
        b2=22;
        cout<<"Perimeter of RectangleOne is:  "<<2*sum()<<endl;
        cout<<"Area of RectangleTwo is:  "<<product();

    }
};

int main()
{
    child c;
    c.display();
}