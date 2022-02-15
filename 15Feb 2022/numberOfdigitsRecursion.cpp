#include<iostream>
using namespace std;

int numberOfDigit(int n);
int main()
{
    int number;
    cout<<"Enter any number:  ";
    cin>>number;
    cout<<"Number of digits in "<<number<<"  is  :  "<<numberOfDigit(number);
}

int numberOfDigit(int n)
{
    if(n>=0 && n<=9)
    {
        return 1;
    }
    return 1+numberOfDigit(n/10);
}