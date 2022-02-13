#include<iostream>
#include<stdbool.h>
using namespace std;


bool isPerfect(int number);
int main()
{
    int number;
    cout<<"Enter any positive number to be ckecked whether it is perfect or not: ";
    cin>>number;
    if(isPerfect(number))
    {
        cout<<number<< "  is a perfect number.";
        return 0;
    }
    cout<<number<<" is not a perfect number.";
}

bool isPerfect(int number)
{
    int sumOfFactors=0;
    for(int i=1; i<number; i++)
    {
        if(number%i==0)
        {
            sumOfFactors+=i;
        }
    }

    return sumOfFactors==number?true:false;
}