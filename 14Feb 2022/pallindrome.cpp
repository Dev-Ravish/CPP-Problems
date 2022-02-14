#include<iostream>
using namespace std;

int reverseOfNum(int number);
int main()
{
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    if(reverseOfNum(number) == number)
    {
        cout<<number<<" is a pallindrome number.";
    }
    else
    {
        cout<<number<<" is not a pallindrome number";    
    }
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