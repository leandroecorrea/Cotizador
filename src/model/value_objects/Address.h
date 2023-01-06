#pragma once
#include <string>
class Address
{
private:
	std::string street;
	std::string number;
	std::string city;
	std::string province;
public:
	Address(std::string street, std::string number, std::string city, std::string province);
	~Address();
	std::string toString() const;
};