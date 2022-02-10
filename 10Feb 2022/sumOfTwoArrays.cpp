#include<iostream>
using namespace std;

void input(int *ptr, int size);
int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int arrayOne[size],arrayTwo[size],sum[size],*ptrOne=arrayOne,*ptrTwo=arrayTwo, *ptrSum=sum;
    cout<<"Enter the elements of FIRST array sized "<<size<<" :   "<<endl;
    input(ptrOne,size);
    cout<<"Enter the elements of SECOND array sized "<<size<<" :   "<<endl;
    input(ptrTwo,size);
    cout<<"SUM of Two Arrays: "<<endl;
    for(int i=0; i<size; i++)
    {
        *ptrSum=*ptrOne+*ptrTwo;
        ptrTwo++;
        ptrOne++;
        ptrSum++;
        cout<<sum[i]<<" ";
    }

    
}


void input(int *ptr, int size)
{
    for(int i=0; i<size; i++)
    {
        cin>>*ptr;
        ptr++;
    }
    
}
    