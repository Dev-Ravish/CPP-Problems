#include<iostream>
using namespace std;

#define pi 3.14

#define print cout

#define input cin

#define cube(x) x*x*x

#define msg(x) #x

#define max(x,y) (x>y?x:y)

#define volume(r) 4/3*pi*cube(r)

#ifndef pi //it will work if pi is not defined anywhere. Generally if too many vareables are defined then we can use this type of statement to redifne things and let no errors come up.
    #define pi 3.1425
#endif

int main()
{

    double radius, v1, v2;
    print<<msg(enter the value of radius:   );
    input>>radius;
    v1=volume(radius);
    print<<msg(volume of the first sphere is = )<<v1<<endl;
    
    
    print<<msg(enter the value of radius:   );
    input>>radius;
    v2=volume(radius);
    print<<msg(volume of the second sphere is = )<<v2<<endl;

    print<<msg(Greater volume is = )<<max(v1,v2)<<endl;
}
