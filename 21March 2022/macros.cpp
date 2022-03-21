#include<iostream>
using namespace std;

#define pi 3.14

#define print cout

#define input cin

#define cube(x) x*x*x

#define msg(x) #x

#ifndef pi //it will work if pi is not defined anywhere. Generally if too many vareables are defined then we can use this type of statement to redifne things and let no errors come up.
    #define pi 3.1425
#endif

int main()
{

    double radius;
    print<<msg("enter the value of radius:   ");
    input>>radius;
    print<<msg(volume of the sphere is = )<<4/3*pi*cube(radius);

}