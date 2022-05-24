#include<iostream>

using namespace std;

int main()
{
    int T, N;
    cin>>T;

    while (T--)
    {
        cin>>N;
        int coefficients[N];
        for(int i=0; i<N; i++)
        {
            cin>>coefficients[i];
        }
        for(int i=N-1; i>=0; i--)
        {
            if(coefficients[i]!=0) cout<<i;
        }
    }
    
}