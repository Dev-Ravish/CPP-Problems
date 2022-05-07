#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v { 1, 2, 31, 12, 32 };

    for (auto x : v)
    {
        cout << x << "  ";
    }


    v.insert(v.begin()+3, 200);

    cout << endl;
    for (auto x : v)
    {
        cout << x << "  ";
    }

    v.insert(v.begin(), 2, 21);

    cout << endl;
    for (auto x : v)
    {
        cout << x << "  ";
    }

    vector<int> v1;
    v1.insert(v1.begin(), v.begin(), v.begin()+3);
    cout << endl<<"v1 vector:  "<<endl;
    for (auto x : v1)
    {
        cout << x << "  ";
    }

}
