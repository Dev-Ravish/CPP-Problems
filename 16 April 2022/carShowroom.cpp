#include <iostream>
#include <fstream>
using namespace std;

#define print cout
#define input cin
class Car
{
protected:
    string price;
    string varientName;
    string color;
    string engType;

public:
    virtual void setPrice(string price, int pin) = 0;
    virtual void setName(string varientName, int pin) = 0;
    virtual void setColor(string color, int pin) = 0;
    virtual void setEngineType(string engType, int pin) = 0;
    virtual string getName() = 0;
    virtual string getPrice() = 0;
    virtual string getColor() = 0;
    virtual string getEngType() = 0;
};

class Audi : public Car
{
public:
    Audi(string varientName, string price, string color, string engType)
    {
        this->varientName = varientName;
        this->price = price;
        this->color = color;
        this->engType = engType;
    }

    void setPrice(string price, int pin)
    {
        if (pin == 918912)
        {
            this->price = price;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setName(string varientName, int pin)
    {
        if (pin == 91912)
        {
            this->varientName = varientName;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setColor(string color, int pin)
    {
        if (pin == 91892)
        {
            this->color = color;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setEngineType(string engType, int pin)
    {
        if (pin == 91891)
        {
            this->engType = engType;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }

    string getName() { return varientName; }
    string getPrice() { return price; }
    string getColor() { return color; }
    string getEngType() { return engType; }
    ~Audi()
    {
        print << "Audi is destruced." << endl
              << endl;
    }
};
class Toyota : public Car
{
public:
    Toyota(string varientName, string price, string color, string engType)
    {
        this->varientName = varientName;
        this->price = price;
        this->color = color;
        this->engType = engType;
    }

    void setPrice(string price, int pin)
    {
        if (pin == 918912)
        {
            this->price = price;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setName(string varientName, int pin)
    {
        if (pin == 91912)
        {
            this->varientName = varientName;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setColor(string color, int pin)
    {
        if (pin == 91892)
        {
            this->color = color;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setEngineType(string engType, int pin)
    {
        if (pin == 91891)
        {
            this->engType = engType;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }

    string getName() { return varientName; }
    string getPrice() { return price; }
    string getColor() { return color; }
    string getEngType() { return engType; }
};
class Volkswagon : public Car
{
public:
    Volkswagon(string varientName, string price, string color, string engType)
    {
        this->varientName = varientName;
        this->price = price;
        this->color = color;
        this->engType = engType;
    }

    void setPrice(string price, int pin)
    {
        if (pin == 918912)
        {
            this->price = price;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setName(string varientName, int pin)
    {
        if (pin == 91912)
        {
            this->varientName = varientName;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setColor(string color, int pin)
    {
        if (pin == 91892)
        {
            this->color = color;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    void setEngineType(string engType, int pin)
    {
        if (pin == 91891)
        {
            this->engType = engType;
        }
        else
        {
            print << "Wrong Pin. Get it from the authorised person ! ! !" << endl
                  << endl;
        }
    }
    string getName() { return varientName; }
    string getPrice() { return price; }
    string getColor() { return color; }
    string getEngType() { return engType; }
};

int main()
{
    // name price color engineType
    ofstream cl("carList.txt");
    Car *ptr = new Audi("Audi_A6", "30Lac", "Black", "electric");
    cl << ptr->getName() << endl
       << ptr->getPrice() << endl
       << ptr->getColor() << endl
       << ptr->getEngType() << endl
       << endl;

    ptr = new Toyota("Toyota_version7", "40L", "Red", "desiel");
    cl << ptr->getName() << endl
       << ptr->getPrice() << endl
       << ptr->getColor() << endl
       << ptr->getEngType() << endl
       << endl;

    ptr = new Volkswagon("Volkswagon_volks2.0", "55L", "Blue", "petrol");
    cl << ptr->getName() << endl
       << ptr->getPrice() << endl
       << ptr->getColor() << endl
       << ptr->getEngType() << endl
       << endl;
    cl.close();
}
