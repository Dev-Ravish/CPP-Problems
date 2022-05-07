#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1;
    int n,num;
    cout<<"Ente the length of vector: ";
    cin>>n;
    cout<<"Enter the data values:  \n";
    for(int i=0; i<n; i++)
    {
        cin>>num;
        v1.push_back(num);
    }

    cout<<"Displaying:   \n";
    for(auto &x:v1)
    {
        cout<<x++<<"  ";
    }

    cout<<endl;
    for(auto x:v1)
    {
        cout<<x<<"  ";
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v1[i]<<"  ";
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v1.at(i)<<"  ";
    }

    cout<<endl;
    vector<int> v2(n,4);
    for(auto x:v2)
    {
        cout<<x<<"  ";
    }

    int arr[4]={26,7,8,9};
    vector<int> v3(arr,arr+4);

    cout<<endl;
    for(auto x:v3)
    {
        cout<<x<<"  ";
    }


    vector<char> v4{'a', 'b', 'c'};
    cout<<endl;
    for(auto x:v4)
    {
        cout<<x<<"  ";
    }
}