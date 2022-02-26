
#include <iostream>
#include <stdbool.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    void setLength(int length);
    void setBreadth(int breadth);
    int area() { return length * breadth; }
    int perimeter() { return 2 * (length + breadth); }
    bool isSquare();
    ~Rectangle();
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid();
    Cuboid(int h);
    Cuboid(int l, int b, int h);
    Cuboid(Cuboid &c);
    int getHeight() { return height; }
    void setHeight(int h);
    int volume();
    bool isCube();
    ~Cuboid();
};
int main()
{
    Cuboid c(2, 3, 4);
    cout << "Base area:  " << c.area()<<endl;
    cout << "Base Perimeter:  " << c.perimeter()<<endl;
    cout << "volume: " << c.volume()<<endl;
}

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    if (l > 0)
        length = l;
    else
        length = 1;

    if (b > 0)
        breadth = b;
    else
        breadth = 1;
}

Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
    if (l > 0)
        length = l;
    else
        length = 1;
}

void Rectangle::setBreadth(int b)
{
    if (b > 0)
        breadth = b;
    else
        breadth = 1;
}

bool Rectangle::isSquare()
{
    return ((length == breadth) ? true : false);
}

Rectangle::~Rectangle()
{
    cout << "Workings with rectangle is over.";
}
Cuboid::Cuboid()
{
    height = 1;
}
Cuboid::Cuboid(int h = 1)
{
    if (h > 0)
        height = h;
    else
        height = 1;
}

Cuboid::Cuboid(int l, int b, int h)
{
    if (l > 0)
        setLength(l);
    else
        setLength(1);

    if (b > 0)
        setBreadth(b);
    else
        setBreadth(1);

    if (h > 0)
        height = h;
    else
        height = 0;
}
void Cuboid::setHeight(int h = 1)
{
    if (h > 0)
        height = h;
    else
        height = 0;
}

bool Cuboid::isCube()
{
    return ((getLength() == height && height == getBreadth()) ? true : false);
}

int Cuboid::volume()
{
    return area() * height;
}

Cuboid::~Cuboid()
{
    cout << "Cuboid work is over";
}