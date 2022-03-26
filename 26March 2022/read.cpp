#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs("Test.txt");
    string name;
    int phnumber;
    string address;
    ifs >> name >> phnumber >> address;
    cout <<"name   "<< name << endl;
    cout <<"Phone Number    " <<phnumber << endl;
    cout <<"address   "<< address << endl;
    ifs.close();
}