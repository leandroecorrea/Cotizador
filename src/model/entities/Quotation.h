#pragma once
#include "../../shared/DateTime.h"
#include "../value_objects/ClotheAbstract.h"
class Quotation
{
private:
	int id;
	DateTime date;
	int salesmanId;
	ClotheAbstract* clothe;
	int units;
	float total;
public:
	Quotation(DateTime date, int salesmanId, ClotheAbstract* clothe, int units, float total);
	~Quotation();
	void setId(int id);
	int getId() const;
	DateTime getDate() const;
	int getSalesmanId() const;
	ClotheAbstract* getClothe() const;
	float getTotal() const;
	int getUnits() const;
};

