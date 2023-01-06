#pragma once
#include "../../shared/DateTime.h"
class QuotationData
{
public:
	QuotationData(int id, DateTime date, int salesmanId, std::string clothe, float price, int amount, float total);
	~QuotationData();
	int id;
	DateTime date;
	int salesmanId;
	std::string clothe;
	float price;
	int amount;
	float total;
};