#include<iostream>

using  namespace std;


int fibonacii(int num);
int main()
{
    int number;
    cout<<"Enter the number of terms to be printed for fibonacii series:  ";
    cin>>number;

    cout<<fibonacii(number);
}

int fibonacii(int num)
{
    if(num<2)
    {
        return num;
    }

    return fibonacii(num-1) + fibonacii(num-2);

}