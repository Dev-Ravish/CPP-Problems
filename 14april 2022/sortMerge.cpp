#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> fl1 = {1,16,3,4,2,5} , fl2 = {11,2,14,12,15};

    cout<<"fl1 ::"<<endl;
    for(auto x:fl1)
    {
        cout<<x<<"   ";
    }

    cout<<endl<<endl<<"fl2 ::"<<endl;
    for(auto x:fl2)
    {
        cout<<x<<"   ";
    }

    fl1.merge(fl2);

    cout<<endl<<endl<<"after merging  :-"<<endl<<"fl1 ::"<<endl;
    for(auto x:fl1)
    {
        cout<<x<<"   ";
    }

    cout<<endl<<endl<<"fl2 ::"<<endl;
    for(auto x:fl2)
    {
        cout<<x<<"   ";
    }

    fl1.sort();
    cout<<endl<<endl<<"after sorting  :-"<<endl<<"fl1 ::"<<endl;
    for(auto x:fl1)
    {
        cout<<x<<"   ";
    }
    
}