#include<iostream>
using namespace std;

float pi=22/7.0;

class sphere
{
private:
    float radius;

public:
    sphere();
    sphere(float r);
    sphere(sphere &r);
    float getRadius();
    float surfaceArea();
    float volume();
    ~sphere();
};

int main()
{
    sphere s(5.8);
    cout<<"Radius: "<<s.getRadius()<<endl;
    cout<<"Surface Area: "<<s.surfaceArea()<<endl;
    cout<<"Volume: "<<s.volume()<<endl;
}


sphere::sphere()
{
    radius=0.0f;
}
sphere::sphere(float r)
{
    if(r>0)
        radius=r;
    else
        radius=0.0f;
}
sphere::sphere(sphere &f)
{
    radius=f.radius;
}
float sphere::getRadius(){return radius;}
float sphere::surfaceArea(){return 4*pi*radius*radius;}
float sphere::volume(){return 4*pi*radius*radius*radius/3.0;}
sphere::~sphere(){cout<<"Sphere analysis is over!!";}