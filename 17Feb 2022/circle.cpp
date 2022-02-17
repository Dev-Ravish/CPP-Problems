#include<iostream>
using namespace std;

class circle
{
private:
    float radius;

public:
    
    void setRadius(int r)
    {
        if(r>0)
            radius=r;
        else
            radius=0;
    }

    int getRadius()
    {
        return radius;
    }

    float area()
    {
        return 22*radius*radius/7;
    }
    float circumference()
    {
        return 2*22*radius/7;
    }
};

int main()
{
    circle c;
    int radius;
    cin>>radius;

    c.setRadius(radius);

    cout<<"Radius is : "<<c.getRadius()<<endl;

    cout<<"Area and Circumference respectively: "<<c.area()<<" and "<<c.circumference();
}