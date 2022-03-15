//calcute the volume of 5 cylinders with its radius and height increacing successively fron=m initil value of 5.
//Given that none but loop variable can be used.

static int pi=3.14;
#include<iostream>
using namespace std;

class Cylinder
{
public:
    string color;
    static int radius;
    static int height;
    Cylinder(string c)
    {
        color=c;
    }
    static int volume()
    {
        radius++;
        height++;
        //color="red";    Non static members cannot be accessed in static function
        return pi*radius*radius*height;
    }
};

int Cylinder::height=4;
int Cylinder::radius=4;

int main()
{
    Cylinder c1("blue");
    for(int i=1;i<6;i++)
    {
        cout<<"Radius, Height, Volume and color of Rectangle "<<i<<"  :  "<<c1.radius<<"   "<<c1.height<<"   "<<c1.volume()<<"   "<<c1.color<<endl<<endl;  
    }
}