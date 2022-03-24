#include<iostream>
using namespace std;

class Calculator
{
private:
    int pin;
public:
    Calculator(int pin=0)
    {
        this->pin = pin;
        if(pin==96757)
            cout<<"**Welcome to our prime membership plan**"<<endl<<"You have access to all our functionality"<<endl<<endl;
        else
            cout<<"**You have not entered/provided our membership pin**"<<endl<<"You do have access to all our functionality"<<endl<<endl;
    }

    double addition(double a, double b)
    {
        return a+b;
    }

    double subtraction(double a, double b)
    {
        return a-b;
    }

    double multiplication(double a, double b)
    {
        if(pin==96757)
            return a*b;
        else
            cout<<"Please buy our premium plan to use this feature.";
        return 0;
    }

    double division(double a, double b)
    {
        if(pin==96757)
        {
            if(b==0)
                throw 101;
            return a/b;
        }
        else
            cout<<"Please buy our premium plan to use this feature.";
        return 0;
    }

    ~Calculator()
    {
        if(pin==96757)
            cout<<endl<<endl<<"**You have been logged out**"<<endl<<"Thanks for using our premium membership";
        else
            cout<<endl<<endl<<"**Do try our premium version for more**";
    }
};

int main()
{
    Calculator c(96757);
    double numOne, numTwo;
    cout<<"Enter any two numbers = ";
    cin>>numOne>>numTwo;
    cout<<"Addition = "<<c.addition(numOne,numTwo)<<endl;
    cout<<"Substraction = "<<c.subtraction(numOne,numTwo)<<endl;
    cout<<"Multiplication = "<<c.multiplication(numOne,numTwo)<<endl;
    try
    {
        
        cout<<"Division = "<<c.division(numOne,numTwo)<<endl;
    }
    catch(int e)
    {
        cout<<"**Dividing with 0 is not feassible**";
    }
    

}