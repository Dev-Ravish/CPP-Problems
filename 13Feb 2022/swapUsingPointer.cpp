#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    *a = *a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int numOne, numTwo;
    cout<<"Enter two numbers to be swapped: ";
    cin>>numOne>>numTwo;
    
    cout<<endl<<" numOne and numTwo respectively are : "<<numOne<<" and "<<numTwo<<endl;
    swap(&numOne,&numTwo);
    cout<<" numOne and numTwo (after swapping) respectively are : "<<numOne<<" and "<<numTwo;

}