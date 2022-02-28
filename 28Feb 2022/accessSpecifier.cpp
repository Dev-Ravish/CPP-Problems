#include <iostream>
using namespace std;

class parent
{
private:
    int priv;

protected:
    int protec;

public:
    int pub;

};

class derived : public parent
{
    public:
    // public and protected variables can be accessed
    void display()
    {
        protec = 12;
        pub = 10;
        cout << "protected : = " << protec<<endl;
        cout << "public : = " << pub<<endl;
    }

};

int
main()
{
    // only public can be accessed
    parent p;
    p.pub = 180;
    cout<<"public: = "<<p.pub<<endl<<endl;

    derived d;
    d.display();
}