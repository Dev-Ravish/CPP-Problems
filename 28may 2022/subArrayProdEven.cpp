#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    int count=0;

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<n; i++)
    {
        if(array[i]%2 == 0)
        {
            count+=(n-i);
        }
        else
        {
            for(int j=i+1; j<n; j++)
            {
                if(array[j]%2==0)
                {
                    count+=(n-j);
                    break;
                }
            }
        }
    }
    cout<<endl<<count;
}