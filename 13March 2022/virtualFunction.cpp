#include<iostream>
using namespace std;

class Parent
{
public:
    virtual void displayOne()
    {
        cout<<"Virtual Parent function is called"<<endl;
    }

    void displayTwo()
    {
        cout<<"Normal parent class function is called."<<endl;
    }
};

class Child: public Parent
{
public:
    void displayOne()
    {
        cout<<"Child class function is called. "<<endl;
    }
    void displayTwo()
    {
        cout<<"General child class function is called.";
    }
};

class GrandChild:public Child
{

};

int main()
{
    cout<<"When pointer is of parent and object is of child"<<endl<<endl;
    Parent *p=new Child();
    p->displayOne();
    p->displayTwo();
    
    cout<<endl<<"When pointer and object both are of parent."<<endl<<endl;
    delete p;
    p=new Parent();
    p->displayOne();
    p->displayTwo();


    cout<<endl<<"When pointer and object both are of child."<<endl<<endl;
    delete p;
    Child *c=new Child();
    c->displayOne();
    c->displayTwo();


    cout<<endl<<endl;
    p=new GrandChild();
    p->displayOne();
}