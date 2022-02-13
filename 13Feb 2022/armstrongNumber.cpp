#include<iostream>
using namespace std;

int digit(int num);
void armstrongOrNot(int number);


int main()
{
    int number;
    cout<<"Enter nay number to be checked: ";
    cin>>number;
    armstrongOrNot(number);
}



int digit(int num)
{
    int dig=0;
    do
    {
        dig++;
        num/=10;
    } while (num>0);
    return dig;
}

void armstrongOrNot(int number)
{
    int dig=digit(number), numObtained=0,temp=number, rem;
    do
    {
        int multiples=1;
        rem=temp%10;
        temp/=10;
        for(int i=1; i<=dig; i++)
        {
            multiples*=rem;
        }
        numObtained+=multiples;
    } while (temp>0);
    if(numObtained==number)
    {
        cout<<number<<" is an armstrong number.";
    }
    else
    {
        cout<<number<<" is not an armstrong number.";
    }
}

