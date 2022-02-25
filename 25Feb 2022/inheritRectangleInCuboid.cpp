#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    void setLength(float length)
    {
        if (length > 0)
        {
            this->length = length;
        }
        else
        {
            this->length = 0;
        }
    }
    void setBreadth(float breadth)
    {
        if (breadth > 0)
        {
            this->breadth = breadth;
        }
        else
        {
            this->breadth = 0;
        }
    }
    float baseArea()
    {
        return length * breadth;
    }
};

class Cuboid : public Rectangle
{
private:
    float height;

public:
    void setHeight(float height)
    {
        if (height > 0)
        {
            this->height = height;
        }
        else
        {
            this->height = 0;
        }
    }
    float getHeight()
    {
        return height;
    }
};

int main()
{
    Cuboid c;
    float l, b, h;
    cout << "Enter th elength, breadth and height of the cubod respectively:  ";
    cin >> l >> b >> h;
    c.setBreadth(b);
    c.setLength(l);
    c.setHeight(h);
    cout << "Base area = " << c.baseArea();
    cout << endl<< "Volume= " << c.baseArea() * c.getHeight();
}