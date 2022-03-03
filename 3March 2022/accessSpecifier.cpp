#include<iostream>
using namespace std;

class parent
{
private:
    int priv;
protected:
    int prot;
public:
    int publ;
    void display()
    {
        priv=102;  //private member
        prot=12;  //protected member
        publ=11;  //public member
        cout<<"child is called."<<endl;
        cout<<"private variable, protected and public are accessible"<<endl;
        cout<<"priv, prot and publ are: "<<priv<<"  "<<prot<<"  "<<publ<<endl<<endl<<endl;
    }
};

class child: public parent
{
public:
    void display()
    {
        //priv=12      Cannot be accessed
        prot=12;  //protected member
        publ=11;  //public member
        cout<<"child is called."<<endl;
        cout<<"private variable is not accessed, protected and public are accessible"<<endl;
        cout<<"prot and publ are: "<<prot<<"  "<<publ<<endl<<endl<<endl;
    }
};

class grandchild: protected child
{
public:
    void display()
    {
        //priv=112      Cannot be accessed
        prot=10;  //potected member
        publ=19;  //protected member
        cout<<"grandchild is called."<<endl;
        cout<<"private variable is not accessed, protected and public are accessible"<<endl;
        cout<<"prot and publ are: "<<prot<<"  "<<publ<<endl<<endl<<endl;
    }
};

class greatgrandchild: private grandchild
{
public:
    void display()
    {
        //priv=11      Cannot be accessed
        prot=9;  //private member
        publ=8;  //private member
        cout<<"greatgrnadchild is called."<<endl;
        cout<<"private variable is not accessed, both protected variables are accessible"<<endl;
        cout<<"prot and publ are: "<<prot<<"  "<<publ<<endl<<endl;
    }
};//sinsce the class was called privately hence the variables can't be accessed by any other class

int main()
{
    parent p;//only c is accessible
    child c;//only c is accessible
    grandchild gc;//none is accessible
    greatgrandchild ggc;//none is accessible
    
    p.display();
    c.display();
    gc.display();
    ggc.display();

}

