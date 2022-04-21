#include<iostream>
using namespace std;


long factorial(int number);
int main()
{
    int number;

    cout<<"Enter any number:   ";
    cin>>number;

    cout<<"FActorial of " <<number <<"  is  " <<factorial(number);
}

long factorial(int number)
{
    if(number<0)
    {
        cout<<endl<<"Wrong Input";
        return -1;

    }
    if(number==0)
    {
        return 1;
    }

    return number*factorial(number-1);
}