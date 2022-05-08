#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sortWithIndex(int array[], int size)
{
    pair<int,int> p[size];
    for(int i=0; i<size; i++)
    {
        p[i] = {array[i], i};
    }

    sort(p,p+size);

    for(int i=0; i<size; i++)
    {
        cout<<p[i].first<<"\t"<<p[i].second<<endl;
    }

}

int main()
{
    int array[] = {2,3,4,5,6,7,8,9,1};
    sortWithIndex(array, 9);
}