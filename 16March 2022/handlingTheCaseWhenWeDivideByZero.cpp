#include<iostream>
using namespace std;

int main()
{
    int n1=12, n2=0, q;
    try
    {
        if(n2==0)
        {
            throw 404;
        }
        q=n1/n2;
        cout<<n1<<" / "<<n2<<" = "<<q;
    }
    catch(int e)
    {
        cout<<"\nWARNING !!!"<<endl;
        cout<<"Division with 0 is not possible."<<endl;
        cout<<"error code: "<<e<<endl;
    }
    
    cout<<"***End***";
}