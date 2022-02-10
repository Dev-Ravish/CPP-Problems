#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an element: ";
    cin>>size;
    int array[size],*ptr=array, number;
    cout<<"Enter the elements of the array sized "<<size;
    for(int i=0; i<size; i++)
    {
        cin>>*ptr;
    }

    cout<<"Enter th numberto be searched in the array: ";
    cin>>number;
    ptr=array;
    for(int i=0; i<size; i++)
    {
        if(*ptr==number)
        {
            cout<<number<<" is present in the array.";
            return 0;
        }
        ptr++;
    }
    cout<<number<<" is not present in the array.";
    return 1;
}