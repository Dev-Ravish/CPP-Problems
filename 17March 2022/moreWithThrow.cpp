#include<iostream>
using namespace std;

class myException
{

};

float division(int a, int b)throw(myException)
{
    if(b==0)
        throw myException();
    return a*1.0/b;
}


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
    catch(myException e)
    {
        cout<<"Warning !!!";
        cout<<"Division with zero is not feassible.";
    }
    cout<<endl<<"**Bye**";
}
