#include <iostream>
#include<stdbool.h>
using namespace std;

bool binary(int number, int list[], int start, int end);
int main()
{
    int list[] = { 2, 3, 4, 6, 7, 9, 13, 15, 16};
    int number;

    cout << "Enter the number to be found:  ";
    cin >> number;

    if (binary(number, list, 0, 8))
    {
        cout << number << " is present." << endl;
        return 0;
    }

    cout << number << " is not present." << endl;
    return 1;
}

bool binary(int number, int list[], int start, int end)
{
    int mid = (start + end) / 2;
    int value = list[mid];
    if (end >= start)
    {
        if (number == value)
        {
            return true;
        }
        else if (number > value)
        {
            return binary(number, list, mid + 1, end);
        }
        else if (number < value)
        {
            return binary(number, list, start, mid - 1);
        }
    }
    return false;
}