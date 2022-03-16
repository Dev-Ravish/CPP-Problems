#include<iostream>
using namespace std;

class Student
{
private:
    static int count;
    static int admNo;
    int rollNumber;
    int admissionNumber;
    string name;
public:
    Student(string n)
    {
        name=n;
        count++;
        admNo++;
        rollNumber=count;
        admissionNumber=admNo;
    }
    void changeName(string n, int pin)
    {
        if(pin==12321)
        {
            cout<<"DONE !!! "<<endl;
            cout<<"Name of the student having roll "<<rollNumber<<" and admission number "<<admissionNumber<<" has been changed from "<<name<<" to "<<n<<"."<<endl<<endl;
            name=n;
        }
        else{
            cout<<"***WRONG PIN***"<<endl;
            cout<<"Attempt to change the name of student with roll "<<rollNumber<<" has been declined."<<endl<<endl;
        }
    }
    static int getNumOfStudents()
    {
        return count;
    }
    void getDetails()
    {
        cout<<"Name : "<<name<<endl<<"Roll number : "<<rollNumber<<endl<<"Admission Number : "<<admissionNumber<<endl<<endl;

    }
};

int Student::count=0;
int Student::admNo=6352;

int main()
{
    Student s1("Ravish Kumar");
    Student s2("Rishikesh Jha");
    Student s3("Krishanu Singh");
    Student s4("Akash");
    s1.getDetails();
    s2.getDetails();
    s3.getDetails();
    s4.getDetails();
    cout<<"number of students got addmitted: "<<Student::getNumOfStudents()<<endl<<endl;
    s2.changeName("Rishi",12321);
    s2.getDetails();
    s2.changeName("Rishikesh Jha",21212);
}