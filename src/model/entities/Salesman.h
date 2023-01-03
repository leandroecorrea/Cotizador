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
	Salesman();
	~Salesman();
	int getFullName() const;
	int getId() const;
};

