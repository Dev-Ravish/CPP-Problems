#include<iostream>
using namespace std;

class Building
{
private:
    int plotArea=100;//plot area in acres
    string location="Mumbai";
    int ratePerFlat=3000000;
public:
    Building()
    {

    }
    Building(int plotArea, string location, int ratePerFlat, int pin=0)
    {
        if(pin==912429)
        {
            this->plotArea=plotArea;
            this->location=location;
            this->ratePerFlat=ratePerFlat;
        }
        else
        {
            cout<<"Wrong PIN ! ! Please contact :  XXXXX XX981";
        }
    }
    int getArea(){return plotArea;}
    string getLocation(){return location;}
    int getRate(){return ratePerFlat;}
    void setArea(int a, int pin=0)
    {
        if(pin==91429)
        {
            plotArea=a;
        }
        else
        {
            cout<<"Wrong PIN ! ! Please contact :  XXXXX XX981";
        }
    }
    void setLocation(string l, int pin=0)
    {
        if(pin==91429)
        {
            location=l;
        }
        else
        {
            cout<<"Wrong PIN ! ! Please contact :  XXXXX XX981";
        }       
    }
    void setRate(int r, int pin=0)
    {
        if(pin==91429)
        {
            ratePerFlat=r;
        }
        else
        {
            cout<<"Wrong PIN ! ! Please contact :  XXXXX XX981";
        }
    }
    ~Building()
    {
        cout<<"Building Details Finalised. Thankyou for having trust in us.";
    }
};

int main()
{
    //go like plotArea, location, rate and pin respectively if wanting customised building
    Building b1;
    cout<<"Area  :   "<<b1.getArea()<<endl;
    cout<<"Location  :  "<<b1.getLocation()<<endl;
    cout<<"Rate  :  "<<b1.getRate()<<endl;
}