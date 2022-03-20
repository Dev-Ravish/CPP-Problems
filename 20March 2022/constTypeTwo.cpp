#include<iostream>
using namespace std;

int main()
{
    int x=1,y=2;
    //int const* ptr = &x; 
    const int *ptr = &x; //same as above.

    //(*ptr)++; we cannot change the value at that location if the pointer value is defined as constant.
    cout<<"value of pointer = "<<*ptr<<endl;

    ptr=&y; // But we can change the location where pointer points.
    cout<<"value of pointer = "<<*ptr<<endl;

//_________________________________________________________________________________________


    int *const ptrTwo = &y; //same as above.

    cout<<"value of pointer = "<<*ptrTwo<<endl;

    (*ptrTwo)++; //we can change the value at that location if the pointer is defined as constant.
    cout<<"value of pointer = "<<*ptrTwo<<endl;
    //ptrTwo=&y; But we cannot change the location where pointer points.

//_________________________________________________________________________________________

    const int *const ptrThree = &x; //Now we can use this inly to read the value of x .

    cout<<"value of pointer = "<<*ptrThree<<endl;
    //(*ptrThree)++; we cannot change the value at that location if the pointer value is defined as constant.
    
    //ptrThree=&y; Neither can  we change the location where pointer points.



}

