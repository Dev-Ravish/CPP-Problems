#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int T,N;
    cin>>T;

    while (T--)
    {
        cin>>N;
        int array[N],alt = N/2;
        for(int i=0; i<N; i++)
        {
            cin>>array[i];
        }

        sort(array, array+N);
        if(N%2!=0)
        {
            swap(array[N-2], array[N-1]);
        }
        for(int i=0; i<N/2; i++)
        {
            cout<<array[i]<<" ";
            cout<<array[alt]<<" ";
            alt++;
        }
        if(N%2!=0)
        {
            cout<<array[N-1];
        }
        cout<<endl;
    }
    
}