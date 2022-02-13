#include<iostream>
using namespace std;

int factors(int number);
int main()
{
    int start, end, counter=0;
    cout<<"Enter the sarting and ending point:  ";
    cin>>start>>end;
    for(int i=start; i<=end; i++)
    {
        if(factors(i)==2)
        {
            cout<<i<<" ";
            counter++;
        }
    }
    cout<<endl<<"There are in total "<<counter<<" prime numbers between: "<<start <<" and "<<end;
}

int factors(int number)
{
    int fact=0;
    for(int i=1; i<=number; i++)
    {
        if(number%i==0)
        {
            fact++;
        }
    }
    return fact;
}