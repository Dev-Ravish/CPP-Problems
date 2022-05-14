#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fl1 = {1, 2, 3, 4, 5},fl2, fl3;

    // fl2.assign(fl1);
    fl3.assign(++fl1.begin(), fl1.end() );
    fl2.assign(5,12);
    for (auto x : fl1)
    {
        cout << x << "   ";
    }

    cout << endl;

    for (auto x : fl2)
    {
        cout << x << "   ";
    }

    cout << endl;

    for (auto x : fl3)
    {
        cout << x << "   ";
    }

    cout << endl;
}