#include<iostream>
using namespace std;

int main()
{
    int arrOne[]={1,32,43,5,4,54,355,2,4,5,2,4,5};
    int size=sizeof(arrOne)/sizeof(arrOne[0]),arrTwo[size], *ptrOne=arrOne, *ptrTwo=arrTwo;
    for(int i=0; i<size; i++)
    {
        *ptrTwo=*ptrOne;
        ptrOne++;
        ptrTwo++;
    }
    ptrTwo=arrTwo;
    cout<<"Elements of arrTwo is: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<*ptrTwo<<"  ";
        ptrTwo++;
    }
}