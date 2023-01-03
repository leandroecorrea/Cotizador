#pragma once
#include "../../shared/DateTime.h"
#include "../value_objects/ClotheAbstract.h"
class Quotation
{
private:
	int id;
	DateTime date;
	int salesmanId;
	ClotheAbstract clothe;
	int units;
	float total;
public:
	Quotation(int id, DateTime date, int salesmanId, ClotheAbstract clothe, int units, float total);
	~Quotation();
};

