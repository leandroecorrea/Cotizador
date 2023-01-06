#include "Store.h"

Store::Store(Salesman* salesman, std::string name, Address* address) : salesman(salesman), name(name), address(address)
{
}

Store::~Store()
{
    if (salesman != nullptr)
        delete salesman;
    if (address != nullptr)
        delete address;
}

void Store::addClothe(ClotheAbstract* clothe)
{
    clothes.push_back(clothe);
}

void Store::setSalesman(Salesman* salesman)
{
    if (this->salesman != nullptr)
        delete salesman;
    this->salesman = salesman;
}

std::string Store::getName() const
{
    return this->name;
}

Address* Store::getAddress() const
{
    return address;
}

Salesman* Store::getSalesman() const
{
    return this->salesman;
}
