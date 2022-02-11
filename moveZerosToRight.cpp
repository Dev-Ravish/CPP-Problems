#include<iostream>
using namespace std;

int main()
{
    int size, pos=0, sec=-1;
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
        int j=i+1;
        while(ar[i]==0 && j<size)
        {
            swap(ar[i],ar[j]);
            j++;
        }
    }
    cout<<"Resultant array is: ";
    for(auto x:ar)
    {
        cout<<x<<"  ";
    }
}