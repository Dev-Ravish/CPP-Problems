#include<iostream>
using namespace std;

#define comparision(x,y) ((x>y)?x:y)

template <typename T>
T Comparision( T numOne,T numTwo)
{
    return(numOne>numTwo)? numOne:numTwo;
}

int main()
{
    int numOne, numTwo;
    cout<<"Enter two numbers:  ";
    cin>>numOne>>numTwo;

    cout<<"greatest number among "<<numOne<<" and "<<numTwo<<"  : "<<Comparision<int>(numOne,numTwo)<<endl;
    cout<<"greatest number among "<<numOne<<" and "<<numTwo<<"  : "<<comparision(numOne,numTwo);
}
