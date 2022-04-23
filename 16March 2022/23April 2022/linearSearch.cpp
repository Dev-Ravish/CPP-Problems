#include<iostream>
#include<stdbool.h>

using namespace std;

bool linSearch(int array[],int number,int index,int length);

int main()
{
    int array[]={1,23,432,2,1,213,132};
    int number, length=sizeof(array)/sizeof(array[0]);
    cout<<"Enter the numbr to be searched:  ";
    cin>>number;

    if(linSearch(array,number,0,length))
    {
        cout<<number<<"  is available in the given array.";
    }
    else
    {
        cout<<number<<" is not avalable in the given array.";
    }
    return 0;
}


bool linSearch(int array[],int number,int index,int length)
{
    if(index==length)
    {
        return false;
    }
    if(array[index]==number)
    {
        return true;
    }
    else
    {
        return linSearch(array,number,index+1,length);
    }
}