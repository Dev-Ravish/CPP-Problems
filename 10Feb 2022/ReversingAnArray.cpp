#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an array:  ";
    cin>>size;
    int array[size], *ptr=array, *ptrEnd=&array[size-1];
    cout<<"enter the "<<size<<" elements of an array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>*ptr;
        ptr++;
    }
    ptr=array;
    while(ptrEnd>ptr)
    {
        swap(*ptr,*ptrEnd);
        ptr++;
        ptrEnd--;
    }
    ptr=array;
    cout<<"Reversed array is :   "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }
}