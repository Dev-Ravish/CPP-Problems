#include<iostream>
using namespace std;
int main()
{
    int number,*pointer,*factorial,fact;
    cout<<"Enter a number";
    cin>>number;
    pointer=&number;
    factorial=&fact;
    *factorial=1;
    for(int i=1; i<=*pointer; i++ )
    {
        *factorial*=i;
    }
    printf("The Factorial of %d is : %d",number,*factorial);
}