#include<iostream>
using namespace std;

int greatestCommonDivisor(int n1, int n2);
int main()
{
    int numOne,numTwo;
    cout<<"Enter any two positive numbers whose GCD is to be found:  ";
    cin>>numOne>>numTwo;
    cout<<"HCF Of "<<numOne<<" and "<<numTwo<<" is "<<greatestCommonDivisor(numOne,numTwo);

}

int greatestCommonDivisor(int n1, int n2)
{
    if (n2 != 0)
        return greatestCommonDivisor(n2, n1 % n2);
    else
        return n1;
}