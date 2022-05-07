#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v{10, 20, 30, 40, 50};

    for (auto x : v)
    {
        cout << x << "  ";
    }

    cout << endl;

    v.pop_back(); // removes the last element

    for (auto x : v)
    {
        cout << x << "  ";
    }

    cout << endl;
    cout << endl;
    cout << "front: " << v.front() << "    "
         << "back:  " << v.back(); // front() calls the reference of the first value in vector and back() call the refereb=nce of last value of the vector

    cout << endl;
    cout << endl;
    v.front() = 1;
    v.back() = 3;
    cout << "front: " << v.front() << "    "
         << "back:  " << v.back();
}