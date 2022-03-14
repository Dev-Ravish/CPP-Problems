#include<iostream>
using namespace std;

static float pi=3.14;
class Shape
{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class Rectangle:public Shape
{
private:
    float length;
    float breadth;
public:
    Rectangle(float l=1, float b=1)
    {
        if (l>0)
        {
            length=l;
        }
        else{
            length=1;
        } 
        if (b>0)
        {
            breadth=b;
        }
        else{
            breadth=1;
        }      
    }
    void setLength(float l=1)
    {
        if (l>0)
        {
            length=l;
        }
        else{
            length=1;
        }
    }
    void setBreadth(float b)
    {
        if (b>0)
        {
            breadth=b;
        }
        else{
            breadth=1;
        }
    }
    float area(){return length*breadth;}
    float perimeter(){return 2*(length+breadth);}

};

class Circle:public Shape
{
private:
    float radius;
public:
    Circle(float r=1)
    {
        if (r>0)
        {
            radius=r;
        }
        else{
            radius =1;
        }
    }
    void setRadius(float r=1)
    {
        if (r>0)
        {
            radius=r;
        }
        else{
            radius =1;
        }
    }
    float area(){return pi*radius*radius;}
    float perimeter(){return 2*pi*radius;}
};

int main()
{
    Shape *p=new Rectangle(4.5,4);
    cout<<"Area of Rectangle:  "<<p->area()<<endl;
    cout<<"Perimeter of Rectangle:  "<<p->perimeter()<<endl;
    p=new Circle(2.2);
    cout<<"Area of circle:  "<<p->area()<<endl;
    cout<<"Perimeter of circle:   "<<p->perimeter();
}