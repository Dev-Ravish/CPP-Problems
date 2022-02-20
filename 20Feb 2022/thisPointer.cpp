#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth);
    int area();
    int perimeter();
};

int main()
{
    Rectangle r(5,10);
    cout<<"area= "<<r.area()<<endl;
    cout<<"perimeter = "<<r.perimeter()<<endl;

}

Rectangle::Rectangle(int length=0, int breadth=0)
{
    if(length>0)
        this->length=length;
    else
        this->length=0;
    if(breadth>0)
        this->breadth=breadth;
    else
        this->breadth=0;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}