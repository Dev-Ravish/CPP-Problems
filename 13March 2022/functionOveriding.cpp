#include<iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout<<"Fuction of parent class."<<endl;
    }
};

class ChildOne:public Parent
{


};

class ChildTwo: public Parent
{
public:
    void display()
    {
        cout<<"childTwo is called"<<endl;
    }
};

int main()
{
    Parent p;
    ChildOne c1;
    ChildTwo c2;
    p.display();
    c1.display();
    c2.display();

}