#include<iostream>
using namespace std;

float division(int a, int b);
int main()
{
    int n1, n2; float output;
    cout<<"Enter any two numbers: ";
    cin>>n1>>n2;
    try
    {
        output=division(n1,n2);
        cout<<"Output is:  "<<output;
    }
    catch(int e)
    {
        cout<<"Warning !!!";
        cout<<"Division with zero is not feassible.";
        cout<<endl<<"COde Error: "<<e;
    }
    cout<<endl<<"**Bye**";
}

float division(int a, int b)
{
    if(b==0)
        throw 101;
    return a*1.0/b;
}