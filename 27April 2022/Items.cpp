#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Items
{
private:
    string name;
    float price;
    int quantity;

public:
    Items(){};
    Items(string name, float price, int quantity);
    friend ofstream & operator<<(ofstream &ofs, Items &item);
    friend ifstream & operator>>(ifstream &ifs, Items &item);
    friend ostream & operator<<(ostream &os, Items &item);
    
};


int main()
{
    int numOfItems;
    string name;
    float price;
    int quantity;

    cout<<"Enter the number of the items to be bought:  ";
    cin>>numOfItems;

    vector<Items *> list;

    for(int counter=0; counter<numOfItems; counter++)
    {
        cout<<"Enter the name, prie and quantity of the item  "<<counter+1<<"  ";
        cin>>name;
        cin>>price;
        cin>>quantity;

        list.push_back(new Items(name,price,quantity));
    }

    ofstream ofs("Items.txt");
    vector<Items *>::iterator itr;
    for(itr=list.begin(); itr!=list.end(); itr++)
    {
        ofs<<**itr;
    }
    ofs.close();

    Items item;
    ifstream ifs("Items.txt");
    for(int i=0; i<numOfItems; i++)
    {
        ifs>>item;
        cout<<"Item "<<i+1<<": "<<endl<<item;
    }
}




ofstream & operator  <<(ofstream &ofs, Items &item)
{
    ofs<<item.name<<endl;
    ofs<<item.price<<endl;
    ofs<<item.quantity<<endl;
    return ofs;
}

ifstream & operator  >>(ifstream &ifs, Items &item)
{
    ifs>>item.name;
    ifs>>item.price;
    ifs>>item.quantity;
    return ifs;
}

ostream & operator <<(ostream &os, Items &item)
{
    os<< "name: \t\t"<< item.name<<endl;
    os<< "price: \t\t"<<item.price<<endl;
    os<< "quantity: \t"<<item.quantity<<endl<<endl;
    return os;
}

Items::Items(string name, float price, int quantity)
{
    this->name=name;
    this->price=price;
    this->quantity=quantity;
}