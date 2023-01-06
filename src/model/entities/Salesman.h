#pragma once
#include <string>
#include <vector>
#include "Quotation.h"
class Salesman
{
private:
	int id;
	std::string firstName;
	std::string lastName;
	std::vector<Quotation> quotations;
public:
	Salesman(int id, std::string firstName, std::string lastName);
	~Salesman();
	std::string getFullName() const;
	int getId() const;
};

