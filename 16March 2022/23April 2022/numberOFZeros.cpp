#include<iostream>
using namespace std;

int numOfZero(int number);

int main()
{
    int number;
    cout<<"Enter any number:   ";
    cin>>number;
    if (number==0)
    {
        cout<<"Numebr of zZeros in  "<<number<<"  is 1";
    }
    
    else
    {
        cout<<"Numebr of zZeros in  "<<number<<"  is "<<numOfZero(number);
    }
}

int numOfZero(int number)
{
    if(number>0)
    {
        if (number%10==0)
        {
            return 1+numOfZero(number/10);
        }
        return 0+numOfZero(number/10);
    }
    return 0;
}