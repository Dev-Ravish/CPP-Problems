#include<iostream>
using namespace std;

class Food
{
public:
    virtual void make()=0;
    virtual void eat()=0;
    
};

class Samosa:public Food
{
public:
    void make()
    {
        cout<<"Samosa is ready to be eaten."<<endl;
    }
    void eat()
    {
        cout<<"Samosa has been eaten."<<endl;
    }
};

class Momos:public Food
{
public:
    void make()
    {
        cout<<"Momos are ready to be eaten."<<endl;
    }
    void eat()
    {
        cout<<"Momos has been eaten."<<endl;
    }
};

class Pizza:public Food //abstract class since the purely virual functions of Food is not
{                       //overided here.
    void delivery(){cout<<"Pizza is delivered";}
};

int main()
{
    Food *p=new Samosa();
    p->make();
    p->eat();
    p=new Momos();
    p->make();
    p->eat();
    //p=new Pizza();//Can't be done cause pizza has now become abstract class. 
    //Pizza p1=new Pizza();
    //p1.delivery();
}