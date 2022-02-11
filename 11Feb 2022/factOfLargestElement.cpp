#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Entter the size of an array: ";
    cin>>size;
    int array[size],largest,*ptr=array;
    cout<<"Enter the "<<size<<" elements of the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>*ptr;
        ptr++;
    }
    ptr=array;
    for(int i=0; i<size; i++)
    {
        if(*ptr>*(array+largest))
        {
            largest=i;
        }
        ptr++;
    }
    int fact=1;
    for(int i=1; i<=*(array+largest); i++)
    {
        fact*=i;
    }

    cout<<"Factorial of the largest number "<<*(array+largest)<<" is:  "<<fact;
}



