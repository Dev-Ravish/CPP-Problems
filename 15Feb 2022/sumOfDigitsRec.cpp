#include<iostream>
using namespace std;

int sumOfDigit(int n);
int main()
{
    int number;
    cout<<"Enter any number:  ";
    cin>>number;
    cout<<"sum of digits of "<<number<<"  is  :  "<<sumOfDigit(number);
}

int sumOfDigit(int n)
{
    if(n>=0 && n<=9)
    {
        return n;
    }
    return n%10 + sumOfDigit(n/10);
}