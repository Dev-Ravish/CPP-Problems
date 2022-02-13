#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int start, end, counter=0;
    cout<<"Enter the sarting and ending point:  ";
    cin>>start>>end;
    for(int i=start; i<=end; i++)
    {
        cout<<"factorial of "<<i <<" is :  "<<factorial(i)<<endl;
    }
}
