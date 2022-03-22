#include<iostream>
using namespace std;

#define pi 3.14

namespace rectangle
{
    float area(float l, float b)
    {
        return l*b;
    }

    float perimeter(float l, float b)
    {
        return 2*(l+b);
    }
} // namespace rectangle


namespace circle
{
    float area(float r)
    {
        return pi*r*r;
    }

    float perimeter(float r)
    {
        return 2*pi*r;
    }
} // namespace circle

namespace trapezium
{
    float area(float p1, float p2, float h)
    {
        return (p1+p2)*h;
    }

    float perimeter(float p1, float p2, float h)
    {
        return p1+p2+2*(h);
    }    
} // namespace triangle

using namespace circle; 

int main()
{
    //rectangle
    float length, breadth, areaValue, perimeterValue;
    cout<<"Enter the length and breaddth of rectangle:   ";
    cin>>length>>breadth;
    areaValue= rectangle::area(length,breadth);
    perimeterValue= rectangle::perimeter(length, breadth);

    cout<<"Area and perimeter of rectangle respictively are:   "<<areaValue<<"  and  "<<perimeterValue<<" . "<<endl<<endl;
    //circle
    float radius;
    cout<<"Enter the radius of the circle:   ";
    cin>>radius;
    areaValue= area(radius);
    perimeterValue= perimeter(radius);
    cout<<"Area and perimeter of circle respictively are:   "<<areaValue<<"  and  "<<perimeterValue<<" . "<<endl<<endl;

    //trapezium
    float parallelSideOne, parallelSideTwo, height;
    cout<<"Enter the parallel sides' length and height of trapezium respectively:   ";
    cin>>parallelSideOne>> parallelSideTwo>> height;
    areaValue=trapezium::area(parallelSideOne, parallelSideTwo, height);
    perimeterValue=trapezium::perimeter(parallelSideOne, parallelSideTwo, height);
    cout<<"Area and perimeter of trapezium respictively are:   "<<areaValue<<"  and  "<<perimeterValue<<" . "<<endl<<endl;

}