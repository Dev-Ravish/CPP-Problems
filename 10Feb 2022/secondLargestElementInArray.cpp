#include<iostream>
using namespace std;

int main()
{
    int array[15]={46,2,43,23,3,4,45,5,7,78,5,4,32,455,662};
    int *ptr=array, largest=0 , secondLargest=-1, *ptrStart=array;
    for(int i=1; i<15; i++)
    {
        ptr++;
        int lar=*(ptrStart+largest);
        if(*(ptr)>lar)
        {
            secondLargest=largest;
            largest=i;
        }
        else if (lar!=*ptr)
        {
            if(secondLargest==-1 || *ptr>lar)
            {
                secondLargest=i;
            }
        }
        
    }
    cout<<"Index of second largest element= "<<secondLargest;
}