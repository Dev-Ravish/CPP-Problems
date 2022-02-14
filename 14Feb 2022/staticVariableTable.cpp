#include<iostream>
using namespace std;


int func(int num);
int main()
{
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    for(int i=1; i<=10; i++)
    {
        cout<<number<<" X "<<i<<" = "<<func(number)<<endl;
    }
}

int func(int num)
{
    static int number=0;
    number+=num;
    return number;
}