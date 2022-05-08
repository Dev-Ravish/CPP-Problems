//Two Methods


#include<iostream>
#include<algorithm>
#include<vector>
#include<stdbool.h>

using namespace std;

/*void marksSorting(int rollNumber[], int marks[], int size)
{
    pair<int,int> rollMarks[size];

    for(int i=0; i<size; i++)
    {
        rollMarks[i] = {marks[i], rollNumber[i]};
    }

    sort(rollMarks,rollMarks+size);

    for(int i=size-1; i>0; i--)
    {
        cout<<rollMarks[i].second<<"   "<<rollMarks[i].first<<endl;
    }
}*/


bool cmp(pair<int,int>p1, pair<int,int>p2)
{
    return p1.first>p2.first;
}


void marksSorting(int rollNumber[], int marks[], int size)
{
    pair<int,int> rollMarks[size];

    for(int i=0; i<size; i++)
    {
        rollMarks[i] = {marks[i], rollNumber[i]};
    }

    sort(rollMarks,rollMarks+size, cmp);

    for(auto x:rollMarks)
    {
        cout<<x.second<<"   "<<x.first<<endl;
    }
}

int main()
{
    int roll[]={1,4,6,2,5,3,9,10,8,7};
    int marks[]={88,99,89,87,90,90,95,94,76,56};

    marksSorting(roll, marks, 10);
}