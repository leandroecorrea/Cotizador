#include "Address.h"

Address::Address(std::string street, std::string number, std::string city, std::string province) : street(street), number(number), city(city), province(province)
{
}

Address::~Address()
{
}

std::string Address::toString() const
{
    return street + " " + number + " - " + city + ", " + province;
}
