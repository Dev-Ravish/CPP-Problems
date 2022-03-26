#include <fstream>
using namespace std;

int main()
{
    ofstream of("Test.txt");
    of << "Ravish_Kumar" << endl;
    of << 1234567890 << endl;
    of << "Chennai,TamilNadu,India-600001" << endl;
    of.close();
}