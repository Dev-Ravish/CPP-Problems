#include <iostream>

using namespace std;

class Employee
{
private:
    int empId;
    string empName;

public:
    Employee(int e, string name)
    {
        empId = e;
        empName = name;
    }
        string getName()
    {
        return empName;
    }
    int getEmployeeId(string password)
    {
        if(password=="iloveindia")
        {
            return empId;
        }
        else{
            return -1;
        }
    }
};

class PartTimeEmployee : public Employee
{
private:
    int dailyWage;

public:
    PartTimeEmployee(int e, string name, int dailyWage) : Employee(e, name)
    {
        this->dailyWage = dailyWage;
    }
    int getDailyWage()
    {
        return dailyWage;
    }
};

class FullTimeEmployee : public Employee
{
private:
    int salary;

public:
    FullTimeEmployee(int e, string name, int salary) : Employee(e, name)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    FullTimeEmployee e1(1231,"Ramesh",230000);
    PartTimeEmployee e2(221,"Narayan Das",1000);
    cout<<"daily wage of "<<e2.getName()<<" is "<<e2.getDailyWage()<<endl;
    cout<<"monthly salary of "<<e1.getName()<<" is "<<e1.getSalary();
}
