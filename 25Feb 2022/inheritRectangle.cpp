#include<iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;
public:
    void setLength(int length=0)
    {
        if (length>0)
        {
            this->length=length;
        }
        else
        {
            this-> length=0;
        }       
    }
    void setBeadth(int breadth=0)
    {
        if (breadth>0)
        {
            this->breadth=breadth;
        }
        else
        {
            this-> breadth=0;
        }       
    }
    float getLength()
    {
        return length;
    }
    float getBreadth()
    {
        return breadth;
    }
    float baseArea()
    {
        return length*breadth;
    }
};

class Cuboid:public Rectangle
{
private:
    float height;
public:
    Cuboid(float l=0.0, float b=0.0, float h=0.0)
    {
        setLength(l);
        setBeadth(b);
        if (h>0)
        {
            height=h;
        }
        else{
            height=0;
        }
        
    }
    float volume()
    {
        return getLength()*getBreadth()*height;
    }
};

int main()
{
    Cuboid c(5,5,5);
    cout<<"Base area: "<<c.baseArea();
    cout<<endl<<"Volume:  "<<c.volume();
}