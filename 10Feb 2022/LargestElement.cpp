#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an element: ";
    cin>>size;
    int array[size],*ptr=array, largest=0;
    cout<<"Enter the elements of the array sized "<<size<<" :   "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>*ptr;
        if(*ptr>*(array+largest))
        {
            largest=i;
        }
        ptr++;
    }
    cout<<"Index of Largest element of the array is: "<<largest;
}

    