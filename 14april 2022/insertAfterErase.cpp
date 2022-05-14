#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> fl1 = {1,2,3,4,5,6}, fl2={11,12,13,14,15,16};

    auto it = fl1.insert_after(fl1.begin(), 7);

    for(auto x:fl1)
    {
        cout<<x<<"  ";
    }

    cout<<endl;

    it = fl1.insert_after(it,8);
    it = fl1.insert_after(it,9);
    it = fl1.erase_after(it);

    for(auto x:fl1)
    {
        cout<<x<<"  ";
    }
    cout<<endl;
    it = fl1.insert_after(it,2);

    for(auto x:fl1)
    {
        cout<<x<<"  ";
    }
    cout<<endl;

    it = fl1.erase_after(it,fl1.end());
    for(auto x:fl1)
    {
        cout<<x<<"  ";
    }

}