#include<iostream>
using namespace std;

int main()
{
    int size,counter=0;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int array[size],one=0,zero=0;
    cout<<"Enter the "<<size<<" elements of the array in 0s and 1s : ";
    for(auto& x:array)
    {
        cin>>x;
    }

    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(array[j]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }

            if(one==zero)
            {
                cout<<"( "<<i<<" , "<<j<<" )";
                counter++;
            }          
        }
        one=0;
        zero=0;
    }
    if(counter==0)
    {
        cout<<"No such sub arrays possible";
    }
    return 0;
}