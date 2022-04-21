#include<iostream>

using namespace std;

void both(int number);
int main()
{
    int number;
    cout<<"Entre any number:  ";
    cin>>number;

    both(number);
}

void both(int number)
{
    if(number==0)
    {
        return;
    }
    cout<<number<<"   ";
    both(number-1);
    cout<<number<<"   ";

}

