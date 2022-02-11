//You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an array:  ";
    cin>>size;
    int array[size],*ptr=array,sumOne=size*(size+1)/2,sumTwo=size*(size+1)/2,counter=1;
    cout<<"input the elements of the array:  ";
    for(int i=0; i<size; i++)
    {
        cin>>*ptr;
        ptr++;
    }
    ptr=array;
    for(int i=0; i<size; i++)
    {
        if(*ptr>0)
        {
            sumOne-=*ptr;
            sumTwo-=counter;
            
            if(sumOne!=sumTwo)
            {
                cout<<"First poditive Missing number:  "<<counter;
                return 0;
            }
            counter++;
        }
        ptr++;
    }
    cout<<"First positive Missing number: "<<counter;
}