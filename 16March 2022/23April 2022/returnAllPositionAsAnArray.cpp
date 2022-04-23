#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,14,1,1};
    int number, length=sizeof(array)/sizeof(array[0]), list[length];

    cout<<"Enter thu number whose position is to be found:   ";
    cin>>number;

    int positions[]=findPositions(array, number, 0, length);
}

int findPositions(int array[], int number, int index, int length, int list[])
{
    if(index == length)
    {
        return list;
    }

    if(array[index] == number)
    {
        
    }
}