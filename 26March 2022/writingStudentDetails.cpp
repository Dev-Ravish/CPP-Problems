#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream & operator<<(ofstream &ofs, Student &s);
};



ofstream &operator <<(ofstream &ofs, Student &s)
{
    ofs<<s.name<<endl<<s.roll<<endl<<s.branch<<endl;

    return ofs;
}



int main()
{

    Student s1;
    s1.name="Ravish_Kumar"; //Don't dare to give spaces here. It will take only the things before space as fisrt component ans then you will have to face logical error.UGHHHH!!
    s1.roll=1;
    s1.branch="Chemical_Engineering";
    
    ofstream ofs("StudentDetails.txt",ios::trunc);
    ofs<<s1;
    ofs.close();

}