#include "Salesman.h"

Salesman::Salesman(int id, std::string firstName, std::string lastName)
{
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
}

Salesman::~Salesman()
{
}

std::string Salesman::getFullName() const
{
	return firstName + " " + lastName;
}

int Salesman::getId() const
{
	return id;
}
