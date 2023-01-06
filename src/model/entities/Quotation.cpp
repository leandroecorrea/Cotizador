#include "Quotation.h"

Quotation::Quotation(DateTime date, int salesmanId, ClotheAbstract* clothe, int units, float total) :  date(date), salesmanId(salesmanId), clothe(clothe), units(units), total(total)
{
}

Quotation::~Quotation()
{
}

void Quotation::setId(int id)
{
	this->id = id;
}

int Quotation::getId() const
{
	return id;
}

DateTime Quotation::getDate() const
{
	return date;
}

int Quotation::getSalesmanId() const
{
	return salesmanId;
}

ClotheAbstract* Quotation::getClothe() const
{
	return clothe;
}

float Quotation::getTotal() const
{
	return total;
}

int Quotation::getUnits() const
{
	return units;
}

