#include<iostream>
using namespace std;

class StacckOverflow{};
class StackUnderflow{};

class Stack
{
public:
    int *ptrStak;
    int top=-1;
    int size;
    Stack(int size)
    {
        this->size = size;
        ptrStak = new int[size];
    } 

    
    void push(int value)
    {
        top++;
        if(top==size)
            throw StacckOverflow();
        ptrStak[top]=value;
    }

    int pop()
    {
        if(top==-1)
            throw StackUnderflow();
        top--;
        return ptrStak[top+1];
    }
};

int main()
{
    Stack s(4);
    s.push(5);
    s.push(8);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    s.push(12);
    cout<<s.pop();

}