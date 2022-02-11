#include<iostream>
using namespace std;

int main()
{
    int n,k,counter=0;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int ar[n];
    for(auto &x:ar)
    {
        cin>>x;
    }
    cout<<"enter the sum to be found: ";
    cin>>k;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(k==ar[i]+ar[j])
            {
                counter++;
            }
        }
    }
    cout<<"Total number of pairs availbale is :  "<<counter;
}