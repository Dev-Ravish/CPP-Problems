#include<iostream>
using namespace std;

class Exception1
{

};

class Exception2:public Exception1
{

};

int main()
{
    try
    {
        try
        {
            throw 1.5;
        }
        catch(double e)
        {
            cout<<"Nested double catch"<<endl;
        }
        
        throw 1;
    }
    catch(int e)
    {
        cout<<"Int catch"<<endl;
    }
    catch(double e)
    {
        cout<<"Double catch"<<endl;

    }
    catch(Exception2 e) //Child class catch block must be written before the parent class catch block
    {
        cout<<"Exception2 catch";
    }
    catch(Exception1 e)
    {
        cout<<"Exception1 catch";
    }
    catch(...)
    {
        cout<<"All catch"<<endl;
    }   
}