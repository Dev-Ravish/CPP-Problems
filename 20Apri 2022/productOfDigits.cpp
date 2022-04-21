#include<iostream>

using namespace std;

int product(int number);
int main()
{
    int number;
    cout<<"Enter any number:   ";
    cin>>number;

    cout<<"Product of the digits of the number:  "<<product(number);
}

int product(int number)
{
    if(number/10==0)
    {
        return number;
    }

    return number%10 * product(number/10);
}