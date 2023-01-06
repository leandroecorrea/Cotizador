#pragma once
#include "../../model/entities/Quotation.h"
#include "../../model/IClotheService.h"
class IQuotationBuilder
{
protected:
	IClotheService* service;
public:
	int quotationId;
	Quality quality;
	float price;
	int amount;
	float total;
	ClotheAbstract* clothe;
	virtual ~IQuotationBuilder();
	IQuotationBuilder(IClotheService* repository);
	virtual Quotation* getQuotation(int salesmanId);
	virtual int getStock() = 0;
	void setQuality(Quality quality);
};