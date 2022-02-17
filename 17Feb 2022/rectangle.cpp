#include<iostream>
using namespace std;

class rectangle
{
public:
        int length;
        int breadth;

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
    rectangle r1;
    cin>>r1.length;
    cin>>r1.breadth;
    cout<<r1.area()<<" ";
    cout<<r1.perimeter();
}