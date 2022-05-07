#include<utility>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int arr1[]={3,4,1,5,2};
    char arr2[]={'E','R','T','A','Z'};

    pair<int, char> p1[5];

    for (int i=0; i<5; i++)
        p1[i] = {arr1[i], arr2[i]};

    sort(p1,p1+5);

    for (int i=0; i<5; i++)
        arr2[i] = p1[i].second;

    for (int i=0; i<5; i++)
        cout<<arr2[i]<<"   ";

}
