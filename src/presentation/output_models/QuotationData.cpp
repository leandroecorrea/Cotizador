#include "QuotationData.h"

QuotationData::QuotationData(int id, DateTime date, int salesmanId, std::string clothe, float price, int amount, float total) : id(id), date(date), salesmanId(salesmanId), clothe(clothe), price(price), amount(amount), total(total)
{
}

QuotationData::~QuotationData()
{
}
