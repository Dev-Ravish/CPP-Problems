#include<iostream>
using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;
public:
    Rational(int n=1, int d=1)
    {
        if(n==0 || d==0)
        {
            numerator=0;
            denominator=1;
        }
        numerator=n;
        denominator=d;
    }

    Rational operator+( Rational r);
    friend ostream & operator<<(ostream &out, Rational &r2);
};

Rational Rational:: operator +(Rational r)
{
        Rational sum;
        sum.numerator=r.numerator*denominator+numerator*r.denominator;
        sum.denominator=r.denominator*denominator;
        return sum;
}

ostream & operator<<(ostream &out, Rational &r2)
{
    out<<r2.numerator<<"/"<<r2.denominator;
    return out;
}

int main()
{
    Rational r1(3,4), r2(2,5);
    Rational sum=r1+r2;
    cout<<"sum of"<<r1<<" and "<<r2<<" is "<<sum<<endl;

}