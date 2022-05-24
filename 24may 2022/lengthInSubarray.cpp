#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int T;
    cin>>T;

    while (T--)
    {
        int N, count=0;
        cin>>N;
        int array[N];
        for(int i=0; i<N; i++)
        {
            cin>>array[i];
        }

        for(int i=1; i<=N; i++)
        {
            for(int j=i; j<=N; j++)
            {
                int l=j-i+1;
               for(int k=i; k<=j; k++)
               {
                   if (array[k-1]==l)
                   {
                       count++;
                       break;
                   }
                   
               } 
            }
        }

        cout<<count<<endl;
    }
    
}