#include<iostream>
using namespace std;

void reverse(int num);
int main()
{
    int number;
    cout<<"Enter any positive number: ";
    cin>>number;
    reverse(number);
}

void reverse(int num)
{
    if(num>0)
    {
        cout<<num<<"  ";
        reverse(num-1);
    }
}