#include<iostream>
#include<forward_list>

using namespace std;

int main()
{

    forward_list <int> fl1;
    fl1.assign({1,2,3,4,5,-1,6,7,8});

    fl1.push_front(0);
    fl1.push_front(-1);
    fl1.push_front(-1);
    fl1.push_front(-1);
    fl1.push_front(-3);
    fl1.pop_front();

    for(auto it=fl1.begin(); it!=fl1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    fl1.remove(-1);

    for(auto it=fl1.begin(); it!=fl1.end(); it++)
    {
        cout<<*it<<"  ";
    }

}