#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=1, int b=1)
    {
        if(l>0)
            length=l;
        else
            length=1;
        if (b>0)
            breadth=b;
        else 
            breadth=1;
    }
    void setLength(int l)
    {
        if(l>0)
            length=l;
        else
            length=1;
    }
    void setBreadth(int b)
    {
        if (b>0)
            breadth=b;
        else 
            breadth=1;
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area(){return length*breadth;}
    int perimeter(){return 2*(length+breadth);}
};


//the class which is extends to the parent class is said to be eg. "Cuboid isA rectangle "
class Cuboid: public Rectangle
{
private:
    int height;
public:
    Cuboid(int h=1)
    {
        if(h>0)
            height=h;
        else
            height=1;
    }

    int volume(){return area()*height;}
};

//the class that contains the object of another class is termed that  eg. "table hasA rectangle"

class Table
{
private:
    Rectangle r;
    int legsHeight;
public:
    Table(Rectangle &r1, int h=1)
    {
        r.setLength(r1.getLength());
        r.setBreadth(r1.getBreadth());
        if(h>0)
            legsHeight=h;
        else
            legsHeight=1;
    }

    void dimensionsOfTable()
    {
        cout<<"length and breadth of the upper surface is: "<<r.getLength()<<" and "<<r.getBreadth()<<" respectively.";
        cout<<endl<<"Area of main surface: "<<r.area();
        cout<<endl<<"Height of legs: "<<legsHeight;
    }
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(11);

    Table t(r);
    t.dimensionsOfTable();

}
