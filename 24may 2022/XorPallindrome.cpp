#include<iostream>
using namespace std;

int main()
{
    int T, N;
    cin>>T;

    while (T--)
    {
       int count=0;
       string s;   
       cin>>N;
       cin>>s;
       for(int i=0; i<N/2; i++)
       {
           if(s[i] != s[N-1-i])
           {
               count++;
           }
       }
       cout<<count<<endl;
    }
    
}