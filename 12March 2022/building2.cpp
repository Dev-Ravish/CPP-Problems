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
            cout<<"Wrong PIN ! ! Please contact :  XXXXX XX981"<<endl;
            cout<<"Values for  area, location and rate remains as it was before"<<endl;
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
            cout<<"Revised Area  :   "<<plotArea<<endl;
        }
        else
        {
            cout<<endl<<"Wrong SETAREA PIN ! ! Please contact :  XXXXX XX981"<<endl;
            cout<<"Plot area remains same i.e. "<<plotArea;

        }
    }
    void setLocation(string l, int pin=0)
    {
        if(pin==9142)
        {
            location=l;
            cout<<"Revised Location:  "<<location;
        }
        else
        {
            cout<<"Wrong SETLOCATION PIN ! ! Please contact :  XXXXX XX981"<<endl;
            cout<<"Plot location remains same i.e. "<<location;
        }       
    }
    void setRate(int r, int pin=0)
    {
        if(pin==914)
        {
            ratePerFlat=r;
            cout<<"Revised rate:  "<<ratePerFlat;
        }
        else
        {
            cout<<endl<<"Wrong SETRATE PIN ! ! Please contact :  XXXXX XX981"<<endl;
            cout<<"Plot rate remains same i.e. "<<ratePerFlat;
        }
    }
    ~Building()
    {
        cout<<endl<<endl<<endl<<"Building Details Finalised and mentioned below. Thankyou for having trust in us."<<endl;
        cout<<"Area  :   "<<plotArea<<endl;
        cout<<"Location  :  "<<location<<endl;
        cout<<"Rate  :  "<<ratePerFlat<<endl<<endl;    
    }
};

int main()
{
    //go like plotArea, location, rate and pin respectively if wanting customised building
    Building b1;
    cout<<"Area  :   "<<b1.getArea()<<endl;
    cout<<"Location  :  "<<b1.getLocation()<<endl;
    cout<<"Rate  :  "<<b1.getRate()<<endl<<endl;
    b1.setArea(200,91429);
    b1.setLocation("kolkata",91429);
}