#include<iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:

    rectangle(int l=0, int b=0)
    {
        length=l;
        breadth=b;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r(3,78);

    cout<<"Length is : "<<r.getLength()<<endl;
    cout<<"Breadth is: "<<r.getBreadth()<<endl;

    cout<<"Area and Perimeter respectively: "<<r.area()<<" and "<<r.perimeter();
}