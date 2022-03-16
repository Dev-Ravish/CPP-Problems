#include <iostream>
using namespace std;

class parent
{
public:
    int a = 10;
    static int counter;
    void showCounter()
    {
        a++;
        c1.display();
        cout << a << endl;
    }
    class Child
    {
    public:
        void display()
        {
            counter++;
            cout << counter << "\t\t";
            // cout << a;//non static member cannot be accessed in the child class;
        }
    };
    Child c1;
};

int parent::counter = 0;

int main()
{
    cout<<"When object is created as many times as the loop is running:-"<<endl;
    cout << "counter\t\ta" << endl;
    cout << "-------\t\t--" << endl;
    for (int i = 1; i <= 10; i++)
    {
        parent p1;
        p1.showCounter();
    }
    parent::counter=0;
    cout<<endl<<"When object is created only once:-"<<endl;
    cout << "counter\t\ta" << endl;
    cout << "-------\t\t--" << endl;
    parent p2;
    for (int i = 1; i <= 10; i++)
    {
        p2.showCounter();
    }
    cout<<endl<<endl<<endl;
    parent::Child c1;
    c1.display();
}