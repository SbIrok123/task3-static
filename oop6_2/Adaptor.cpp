#include "Adaptor.h"

Adaptor::Adaptor(string interface, double price, double speed)
{
    counter++;
    
    ID = "WFID" + to_string(counter/100)+ to_string(counter /10 %10) + to_string(counter%10);
    
    this->interface = interface;
    this->price = price;
    this->speed = speed;
}

string Adaptor::getId() const
{
    return ID;
}

string Adaptor::getInterface() const
{
    return interface;
}

double Adaptor::getPrice() const
{
    return price;
}

double Adaptor::getSpeed() const
{
    return speed;
}

void Adaptor::setPrice(double price)
{
    this->price = price;
}

void Adaptor::setSpeed(double speed)
{
    this->speed = speed;
}

ostream& operator<<(ostream& out, const Adaptor& obj)
{
    out << "ID:" << obj.getId() << endl;
    out << "Interface:" << obj.getInterface() << endl;
    out << "Price:" << obj.getPrice() << endl;
    out << "Speed:" << obj.getSpeed() << endl;
    return out;
}
