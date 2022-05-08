#include<iostream>
#include<vector>

using namespace std;

vector<int> smallerNumber( int arr[], int size, int k)
{
    vector<int> v;

    for(int i=0; i<size; i++)
    {
        if(arr[i]<k)
            v.push_back(arr[i]);
    }

    return v;
}

int main()
{
    int array[] = {112,23,4,5,6,6,5,4,5,45,98,66}, number;
    cin>>number;
    vector<int> smallVector = smallerNumber(array,12, number);

    for(auto x:smallVector)
    {
        cout<<x<<"   ";
    } 
}