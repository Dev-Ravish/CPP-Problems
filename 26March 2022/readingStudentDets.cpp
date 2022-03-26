#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
};


int main()
{
    ifstream ifs;
    ifs.open("StudentDetails.txt");
    Student s1;
    ifs>>s1.name>>s1.roll>>s1.branch;
    ifs.close();
    cout<<"Name  : "<<s1.name<<endl;
    cout<<"Roll number  : "<<s1.roll<<endl;
    cout<<"Branch  : "<<s1.branch<<endl;
}