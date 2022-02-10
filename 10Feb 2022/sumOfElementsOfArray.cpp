#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an element: ";
    cin>>size;
    int array[size],*ptr=array, sum=0;
    cout<<"Enter the elements of the array sized "<<size<<" :   "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>*ptr;
        sum+=*ptr;
        ptr++;
    }
    cout<<"sum of all the element of an array is: "<<sum;
}

    