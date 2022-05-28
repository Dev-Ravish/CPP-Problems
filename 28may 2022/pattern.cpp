// 1 1 1 1 1        1 1 1 1 1 1 1
// 1 2 2 2 1        1 2 2 2 2 2 1 
// 1 2 3 2 1        1 2 3 3 3 2 1 
// 1 2 2 2 1        1 2 3 4 3 2 1 
// 1 1 1 1 1        1 2 3 3 3 2 1 
//                  1 2 2 2 2 2 1 
//                  1 1 1 1 1 1 1
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=2*n-1;
    for(int i=1; i<=a; i++)
    {
        int res=1, b=i;

        if(i>n)
        {
            b=2*n-i;
        }


        for(int j=1; j<=a; j++)
        {
            cout<<res<<" ";
            if(j<b)
            {
                res++;
            }
            
            else if(j>=a-b+1)
            {
                res--;
            }

        }
        cout<<endl;
    }
}