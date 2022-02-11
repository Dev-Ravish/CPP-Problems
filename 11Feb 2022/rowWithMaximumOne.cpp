//Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

#include<iostream>
using namespace std;

int main()
{
    int row,coloumn;
    cout<<"Enter the row and coloumn  of an array:  ";
    cin>>row>>coloumn;
    int array[row][coloumn],sumLar=-1,sum=0,rowLar;
    cout<<"input the elements of the array:  "<<row<<" rows and "<<coloumn<<" coloumns";
    for(int i=0; i<row; i++)
    {
        for(int j=0;j<coloumn;j++)
        {
            cin>>array[i][j];
            sum+=array[i][j];
        }
        if(sum>sumLar)
        {
            sumLar=sum;
            rowLar=i;
        }
        sum=0;
    }
    cout<<"Row with max 1s is:  "<<rowLar;
}    