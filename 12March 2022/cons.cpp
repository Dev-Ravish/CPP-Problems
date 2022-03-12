#include<iostream>
using namespace std;

class Trip
{
private:
    int budget;
    int numOfPeoples;
public:
    Trip();
    Trip(int budget, int numOfPeoples);
    Trip( Trip &t1);
    int getBudget(){return budget;}
    int getNumber(){return numOfPeoples;}
};

int main()
{
    Trip t1;
    cout<<"Budget = "<<t1.getBudget()<<endl;
    cout<<"Number of peoples = "<<t1.getNumber();
}

Trip::Trip()
{
    budget = 10000;
    numOfPeoples = 2;
}

Trip::Trip(int budget, int numOfPeoples)
{
    this->budget=budget;
    this->numOfPeoples=numOfPeoples;
}

Trip::Trip(Trip &t1)
{
    budget=t1.budget;
    numOfPeoples=t1.numOfPeoples;    
}