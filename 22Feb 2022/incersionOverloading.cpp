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
    friend ostream & operator<<(ostream &out, Vector &v);

};

int main()
{
    Vector v(12,4,4);
    cout<<v;
}

Vector::Vector(int x=0,int y=0, int z=0)
{
    xComponent=x;
    yComponent=y;
    zComponent=z;
}

ostream & operator<<(ostream &out, Vector &v)
{
    out<<v.xComponent<<"i + "<<v.yComponent<<"j + "<<v.zComponent<<"k";
    return out;
}
