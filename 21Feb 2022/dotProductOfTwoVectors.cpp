#include<iostream>
using namespace std;

class Vector
{
private:
    int xComponent;
    int yComponent;
    int zComponent;

public:
    Vector(int x, int y, int z);

    int getX();
    int getY();
    int getZ();
    int dotProduct(Vector v);

};

int main()
{
    Vector v1(1,33,4), v2(-2,2,3);
    cout<<"x, y and z components of v1 respectively are:  "<<v1.getX()<<",  "<<v1.getY()<<" and  "<<v1.getZ()<<endl<<endl;
    cout<<"x, y and z components of v2 respectively are:  "<<v2.getX()<<",  "<<v2.getY()<<" and  "<<v2.getZ()<<endl<<endl;
    cout<<"Dot products of vectors v1 and v2 =  "<<v1.dotProduct(v2);

}

Vector::Vector(int x=0, int y=0, int z=0)
{
    xComponent=x;
    yComponent=y;
    zComponent=z;
}

int Vector::getX()
{
    return xComponent;
}

int Vector::getY()
{
    return yComponent;
}

int Vector::getZ()
{
    return zComponent;
}

int Vector::dotProduct(Vector v)
{
    return xComponent*v.xComponent+yComponent*v.yComponent+zComponent*v.zComponent;
}