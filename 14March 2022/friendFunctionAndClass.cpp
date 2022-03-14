#include<iostream>
using namespace std;

class Cuboid;
class Rectangle
{
private:int length;
protected:int breadth;
public:
    int area(){return length*breadth;}
    int perimeter(){return 2*(length+breadth);}
    friend void areaAndPerimeter(int l,int b);
    friend Cuboid;//class must be declared beforehand in order make it known to the compiler that the given is the name of a class.
};


//This function is also the friend of class Rectangle that is why it has access to all its private, protectedd and public members.
void areaAndPerimeter(int l, int b)
{
    Rectangle r1;
    r1.length=l;
    r1.breadth=b;
    cout<<"area:  "<<r1.area()<<endl;
    cout<<"Perimeter:  "<<r1.perimeter()<<endl<<endl;
}


//This class is also the friend of class Rectangle that is why it has access to all its private, protectedd and public members.
class Cuboid
{
private:
    int height;
public:
    Rectangle r1;
    void setParametrs(int l, int b, int h)
    {
        r1.length=l;
        r1.breadth=b;
        height=h;
    }
    int volume(){return r1.area()*height;}
    int perimeter(){return r1.perimeter()+height;}
};

int main()
{
    areaAndPerimeter(10,20);
    Cuboid c1;
    c1.setParametrs(10,10,10);
    cout<<"Volume:  "<<c1.volume()<<endl;
    cout<<"Perimeter:   "<<c1.perimeter();    
}