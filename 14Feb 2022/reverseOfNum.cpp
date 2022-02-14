#include<iostream>
using namespace std;

int reverseOfNum(int number);
int main()
{
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    cout<<"Reverse of "<<number<<" is:  "<<reverseOfNum(number);
}

int reverseOfNum(int number)
{
    int reverse=0, rem;
    do
    {
        rem=number%10;
        reverse=reverse*10+rem;
        number/=10;
    } while (number>0);
    return reverse;
}