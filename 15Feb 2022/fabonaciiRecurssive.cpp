#include<iostream>
using namespace std;
int fabonacii(int n);

int main()
{
    int totalTerm;
    cout<<"Enter the total number of terms: ";
    cin>>totalTerm;
    for(int i=1; i<=totalTerm; i++)
    {
        cout<<fabonacii(i)<<" ";
    }

}

int fabonacii(int n)
{
    if(n==1 or n==2)
    {
        return 1;
    }
    return fabonacii(n-1)+fabonacii(n-2);
}