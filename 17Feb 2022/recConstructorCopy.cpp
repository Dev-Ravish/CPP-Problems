#include<iostream>
using namespace std;
class rectangle 
{
private:
    float length;
    float breadth;

public:
    //default or non-parameterized constructor
    rectangle()
    {
        length=0;
        breadth=0;
    }

    //parameterized constructor
    rectangle(float l, float b)
    {
        if(l>0)
            length=l;
        else if(l<=0)
            length=0;
        if(b>0)
            breadth=b;
        else if(b<=0)
            breadth=0;
    }

    //copy constructor
    rectangle( rectangle &rec)
    {
        length=rec.length;
        breadth=rec.breadth;
    }

    float getLength()
    {
        return length;
    }

    float getBreadth()
    {
        return breadth;
    }

    float area()
    {
        return length*breadth;
    }

    float perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r1(12,44.8);
    rectangle r2(r1);

    cout<<"Length of copied rectangle is:  "<<r2.getLength()<<endl;
    cout<<"Breadth of copied rectangle is:  "<<r2.getBreadth()<<endl;
    cout<<"Area and Perimeter of copied rectangle is:  "<<r2.area()<<" and "<<r2.perimeter();

}