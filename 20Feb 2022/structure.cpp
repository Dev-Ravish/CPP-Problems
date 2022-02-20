#include<iostream>
using namespace std;

//Only difference between struct and class is that struct's data, functions etc. are public by default whereas for class they are private.
struct Calculator
{
    int numOne;
    int numTwo;

    Calculator(int numOne, int numTwo);
    int sum();
    int multiplication();
    int difference();
};

int main()
{
    Calculator c(12,43);
    cout<<"sum = "<<c.sum()<<endl;
    cout<<"multiplication = "<<c.multiplication()<<endl;
    cout<<"difference = "<<c.difference();  
}

Calculator::Calculator(int numOne=0, int numTwo=0)
{
    this->numOne=numOne;
    this->numTwo=numTwo;
}

int Calculator::sum()
{
    return numOne+numTwo;
}

int Calculator::multiplication()
{
    return numOne*numTwo;
}

int Calculator::difference()
{
    if(numOne>numTwo)
    {
        return numOne-numTwo;
    }
    return numTwo-numOne;
}
