#pragma once
#include "IQuotationBuilder.h"
#include "../../model/Pantfit.cpp"
#include "../../model/value_objects/Pant.h"
class PantQuotationRequest : public IQuotationBuilder
{
public:
	PantFit fit;
	PantQuotationRequest(IClotheService* repository);
	~PantQuotationRequest();
	virtual Quotation* getQuotation(int salesmanId) override;
	virtual int getStock() override;
	void setFit(PantFit fit);
};

