#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    static int numOfSquare;
    static int count;
    Rectangle(int l, int b)
    {
        l>0?length=l:length=1;
        b>0?breadth=b:breadth=2;
        count++;
    }
    int area(){return length*breadth;}
    int perimeter(){return 2*(length+breadth);}
    bool isSquare()
    {
        if(length==breadth)
        {
            numOfSquare++;
            return true;
        }
        return false;
    }
};

int Rectangle::numOfSquare=0;
int Rectangle::count=0;
int main()
{
    Rectangle r1(12,2), r2(12,11),r3(1,1),r5(3,3),r7(9,2);
    r1.isSquare();
    r2.isSquare();
    r3.isSquare();
    r5.isSquare(); 
    r7.isSquare();
    cout<<"Total num of square and rectangle:  "<<Rectangle::count<<endl;
    cout<<"Number of squares are: "<<Rectangle::numOfSquare<<endl;
    cout<<"Number of pure rectangles are: "<<Rectangle::count-Rectangle::numOfSquare;

}