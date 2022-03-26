#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ifstream & operator>>(ifstream &ifs, Student &s);
    friend ostream & operator<<(ostream &os, Student s);
};


ifstream & operator>>(ifstream &ifs, Student &s)
{
    ifs>>s.name>>s.roll>>s.branch;

    return ifs;
}


ostream & operator <<(ostream &os, Student s)
{
    os<<"Name  : "<<s.name<<endl;
    os<<"Roll number  : "<<s.roll<<endl;
    os<<"Branch  : "<<s.branch<<endl;

    return os;
}


int main()
{

    Student s1;

    ifstream ifs("StudentDetails.txt");
    if(!ifs.is_open())
        cout<<"File is not present"<<endl;
    else
        cout<<"File is opened"<<endl;
    ifs>>s1;
    ifs.close();

    cout<<s1;
}