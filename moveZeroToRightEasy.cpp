#include<iostream>
using namespace std;

int main()
{
    int size,count=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int ar[size];
    cout<<"Enter the "<<size<<" Total  elements of the array.";
    for(auto& x:ar)
    {
        cin>>x;
    }

    for(int i=0; i<size; i++)
    {
        if(ar[i]!=0)
        {
            swap(ar[i],ar[count]);
            count++;
        }
    }
    cout<<"Resultant array is: ";
    for(auto x:ar)
    {
        cout<<x<<"  ";
    }
}