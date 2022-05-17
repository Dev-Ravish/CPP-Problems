#include<iostream>

using namespace std;

int main()
{
    int N, T, K;
    cin>>T;
    while (T--)
    {
        cin>>N>>K;
        int withdrawUnits[N];
        for (int i=0; i<N; i++)
        {
            cin>>withdrawUnits[i];

        }

        for(int i=0; i<N; i++)
        {
            if(withdrawUnits[i]<=K)
            {
                cout<<"1";
                K-=withdrawUnits[i];
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    
}