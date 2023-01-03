#pragma once
#include "Salesman.h"
#include"../value_objects/Address.h"
class Store
{
private:
	Salesman* salesman;
	std::string name;
	Address* address;
	std::vector<ClotheAbstract*> clothes;
public:
	Store(Salesman* salesman, std::string name, Address* address);
	~Store();
	void addClothe(ClotheAbstract* clothe);
	void setSalesman(Salesman* salesman);
};

