#include<iostream>
using namespace std;

int main()
{
    int arrOne[]={1,32,43,5,4,54,355,2,4,5,2,4,5},arrTwo[]={12,23,34,45,4323,3,4436,778,9,8,34,2,34};
    int size=sizeof(arrOne)/sizeof(arrOne[0]), *ptrOne=arrOne,*ptrTwo=arrTwo;
    for(int i=0; i<size; i++)
    {
        swap(*ptrOne,*ptrTwo);
        ptrTwo++;
        ptrOne++;
    }
    ptrOne=arrOne;
    ptrTwo=arrTwo;
    cout<<"After Swapping the array elements:"<<endl<<endl<<endl;
    cout<<"Elements of arrOne is: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<*ptrOne<<"  ";
        ptrOne++;
    }
    cout<<endl<<"Elements of arrTwo is: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<*ptrTwo<<"  ";
        ptrTwo++;
    }
}