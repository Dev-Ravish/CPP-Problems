#include<iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle(int l=1, int b=1)
    {
        length=l;
        breadth=b;
    }
    int area(){return length*breadth;}
};

class cuboid: public rectangle
{
private:
    int height;
public:
    cuboid(int l, int b, int h):rectangle(l,b)
    {
        height=h;
    }
    int volume()
    {
        return area()*height;
    }
};

int main()
{
    rectangle *p;
    p=new cuboid(5,6,9);
    cout<<"Area  :  "<<p->area();
    //cout<<"Volume  :  "<<p->volume();  this cant be done as pointer is of rectangle.
    
}