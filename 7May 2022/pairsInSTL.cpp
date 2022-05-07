#include<utility>
#include<iostream>

using namespace std;

int main()
{
    pair<int,int> p1(10,2), p2(10,21), p3(10,2); //pairs have a vast usage. For plotting points in 2D , keeping amount and price or anything with 2 values to be kept together uses pairs.

    cout<<p1.first<<"  "<<p1.second<<endl;
    cout<<p2.first<<"  "<<p2.second<<endl;
    cout<<p3.first<<"  "<<p3.second<<endl<<endl;

    cout<<(p1==p2)<<"    "<<(p1==p3)<<"    "<<(p2==p3)<<endl;
    cout<<(p1>p2)<<"    "<<(p2>p1)<<"    "<<(p3<p1)<<"    "<<(p3<=p1);

}