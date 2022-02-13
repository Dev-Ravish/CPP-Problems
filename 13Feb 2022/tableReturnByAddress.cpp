#include<iostream>
using namespace std;

int * table(int num)
{
    int* p= new int[10];
    for(int i=1; i<=10; i++)
    {
        p[i-1]=num*i;
    }
    return p;
}

int main()
{
    int number;
    cout<<"Enter the number whose table is to be found :  ";
    cin>>number;
    int *array=table(number);
    for(int i=0; i<10; i++)
    {
        cout<<number<<" X "<<i+1 <<" = "<<array[i]<<endl;
    }

}