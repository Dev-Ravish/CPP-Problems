#include<iostream>
using namespace std;

int sum(int num);
int main()
{
    int number;
    cout<<"Enter any positive number: ";
    cin>>number;
    cout<<"Sum of first "<<number<<" natural number is : "<<sum(number);
}

int sum(int num)
{
    if(num==1)
    {
        return 1;
    }
    return num+sum(num-1);
}