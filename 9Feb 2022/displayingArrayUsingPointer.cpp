#include<iostream>
using namespace std;

int main()
{
    int size, *pointer;

    cout<<"Enter the size of array:   ";
    cin>>size;
    int array[size];
    cout<<"ENter "<<size<<" elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    pointer=&array[0];
    
    cout<<"The elements you entered : \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"element - "<<i<<" : "<<*pointer<<endl;
        pointer++;
    }
    
}