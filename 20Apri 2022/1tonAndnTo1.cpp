#include<iostream>
using namespace std;

void both(int number, int sub);
int main()
{
    int number;

    cout<<"Entr any number:  ";
    cin>>number;

    both(number,number-1);
}

void both(int number, int sub)
{
    int value=number-sub;
    cout<<value<<"  ";
    if(sub==0)
    {
        cout<<value<<"  ";
      
        return;
    }
    both(number,sub-1);
    cout<<value<<"  ";
}
