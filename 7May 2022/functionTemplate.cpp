#include<iostream>


using namespace std;

template<typename T, int limit> //limit shuld be a constant value.

T maxArrValue(T arr[], int n)
{
    if(n>limit)
        cout<<"\nThe length of array is greater then the limit. ERROR CODE: ";
        return 405;
    int max = arr[0];
    for (int i=1; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main()
{
    int array[] = {13,1,2,4,43};
    cout<<"Max value in the int array is : "<<maxArrValue<int, 20>(array, 5)<<endl;
    
    double array2[] = {13.54,14.3,2.54,4,43.78};
    cout<<"Max value in the double array is : "<<maxArrValue<double, 4>(array2, 5)<<endl;
}