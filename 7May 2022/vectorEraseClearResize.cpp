#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5}, v1=v;
    for(auto x:v1)
    {
        cout<<x<<"  ";
    }

    v.erase(v.begin());

    cout<<endl;
    for(auto x:v)
    {
        cout<<x<<"  ";
    }

    v.erase(v.begin(), v.begin()+3);

    cout<<endl;
    for(auto x:v)
    {
        cout<<x<<"  ";
    }

    v1.clear();
    cout<<endl;
    for(auto x:v1)
    {
        cout<<x<<"  ";
    }

    v1.resize(5);
    cout<<endl;
    for(auto x:v1)
    {
        cout<<x<<"  ";
    }



    v1.resize(9,10);
    cout<<endl;
    for(auto x:v1)
    {
        cout<<x<<"  ";
    }
}