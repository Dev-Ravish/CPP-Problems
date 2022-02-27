// every time a derived class object is created first the parent constructor is exicuted.

#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Default constructor of class Parent" << endl;
    }
    Parent(int x)
    {
        cout << "Parametarised constructor of class Parent:  " << x << endl;
    }
};

class Derived : public Parent
{
public:
    Derived()
    {
        cout << "Default constructor of class Derived" << endl;
    }
    Derived(int a)
    {
        cout << "Parametarised constructor of class Derived:  " << a << endl;
    }
    Derived(int a, int b) : Parent(a)
    {
        cout << "Dual parametarised constructor of class Derived:  " << b << endl;
    }
};

int main()
{
    cout << endl
         << "When no parameterss given:-   " << endl;
    Derived d1;

    cout << "\nWhen one parameter given:-  " << endl;
    Derived d2(3);

    cout << "\nWhen Two Parameters given:-  " << endl;
    Derived d3(3, 4);
}