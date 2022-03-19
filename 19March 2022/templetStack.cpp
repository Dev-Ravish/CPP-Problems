#include<iostream>
using namespace std;



class StackOvedrflow{};
class StackUnderflow{};

template <class T>
class Stack
{
public:
    T arrStack[5];
    int top=-1;

    void push(T value);
    T pop();
};

template <class T>
void Stack<T>::push(T value)
{
    top++;
    if(top==5)
        throw StackOvedrflow();
    arrStack[top]=value;
}

template <class T>
T Stack<T>::pop()
{
    if(top==-1)
        throw StackUnderflow();
    return arrStack[top--];
}

int main()
{
    Stack<double> s;
    s.push(2.4);
    s.push(3);
    s.push(3.7);
    s.push(9.97);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
}