#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle(const int &l, const int &b)
    {
        // l++; now you cannot change the value of the variable called by reference.
        length=l;
        breadth=b;
    }

    int area()const
    {
        //length=121;  now you cannot change the value of the class variable when const is defined.
        return length*breadth;
    }

    int perimeter()const
    {
        //breadth=12;  now you cannot change the value of the class variable when const is defined.
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r(12,23);
    cout<<"Area = "<<r.area()<<endl;
    cout<<"Perimeter = "<<r.perimeter();
}