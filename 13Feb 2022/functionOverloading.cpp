#include<iostream>
using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}

float max(float a, float b)
{
    return a>b?a:b;
}

int main()
{
    cout<<"which is max: "<<endl;
    cout<<"56 or 76  :   "<<max(56,76)<<endl;
    cout<<"6.5 or 7.9:   " << max(6.5,7.9);
}