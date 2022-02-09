#include<iostream>
using namespace std;

int main()
{
    char *pointer,character[26];
    pointer=character;
    for (int i = 0; i < 26; i++)
    {
        *pointer=i+'A';
        pointer++;
    }
    pointer=character;
    cout<<"The Alphabets are : ";
    for (int i = 0; i < 26; i++)
    {
        cout<< *pointer<<" ";
        pointer++;
    }
    
    
}