//if evern then divide by 2 and if odd then subtract 1.

#include<iostream>
using namespace std;



int stepsCounter(int number, int counter);

int main()
{
    int number;
    cout<<"Enter any number:  ";
    cin>>number;

    cout<<"Number of steps is:  "<< stepsCounter(number,0);
}

int stepsCounter(int number, int counter)
{
    if(number==0)
    {
        return counter;
    }   
    else if(number%2 == 0)
    {
        counter++;
        return stepsCounter(number/2,counter);
    }
    else
    {
        counter++;
        return stepsCounter(number-1,counter);
    }
}