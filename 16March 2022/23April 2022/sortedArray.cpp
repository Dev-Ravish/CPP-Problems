#include<iostream>
#include<stdbool.h>


using namespace std;

bool isSorted(int arrray[],int n, int l);
int main()
{
    int array[]={1,2,3,4,5,6,7,8,12,9};
    int length = sizeof(array)/sizeof(array[0]);
    if(isSorted(array,0,length))
    {
        cout<<"The given array is sorted in ascending order.";
    }
    else
    {
        cout<<"The given array is unsorted.";
    }
}

bool isSorted(int array[],int n,int l)
{
    if(n>=l-1)
    {
        return true;
    }
    if(array[n]<array[n+1])
    {
        return isSorted(array, n+1, l);
    }
    else
    {
        return false;
    }
}