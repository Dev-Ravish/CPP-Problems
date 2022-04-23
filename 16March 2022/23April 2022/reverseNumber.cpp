#include<iostream>
#include<math.h>
using namespace std;

int reverse(int number);
int digit(int number);
int reverse2(int number);

int  main()
{
    int number;
    cout<<"Enter any number:  ";
    cin>>number;

    cout<<"reverse of  "<<number<<"  iss  "<< reverse(number)<<endl<<endl;
    cout<<"reverse of  "<<number<<"  iss  "<< reverse2(number);
}


int reverse(int number)
{
    if(number%10 == number)
    {
        return number;
    }

    return number%10*pow(10, digit(number/10)) + reverse(number/10);
}

int reverse2(int number)
{
    if(number%10 == number)
    {
        return number;
    }

    return number%10*pow(10, (int)log10(number/10)+1) + reverse(number/10);
}

int digit(int number)
{
    int digit=0;
    do
    {
        number/=10;
        digit++;
        
    } while (number>0);
    return digit;
}


