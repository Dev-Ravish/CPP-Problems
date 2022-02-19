#include<iostream>
using namespace std;

float pi=22/7.0;

class sphere
{
private:
    float radius;

public:
    sphere()
    {
        radius=0.0f;
    }
    sphere(float r);
    sphere(sphere &r);
    float getRadius()
    {
        return radius;
    }
};

int main()
{
    sphere s;
    cout<<"Radius: "<<s.getRadius()<<endl;
}


sphere::sphere()
{
    radius=0.0f;
}
