#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while (T--)
    {
        int N, odd=0, helper = 0, count=0;
        cin>>N;
        int array[N];

        for(int i=0; i<N; i++)
        {
            cin>>array[i];
            if(array[i]%2 != 0)
            {
                odd=1;
                array[i]-=1;
            }
        }

        sort(array, array+N);
        
        for(int i=0; i<N; i++)
        {
            if((array[i] > helper))
            {
                count++;
                helper=array[i];
            }
        }

        cout<<count+odd<<endl;

    }
    
}