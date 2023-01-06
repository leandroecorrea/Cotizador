#pragma once
#include <vector>
#include "entities/Quotation.h"
class IQuotationRepository
{
public:
	virtual ~IQuotationRepository() = 0;
	virtual std::vector<Quotation*> getQuotations() = 0;
	virtual int saveQuotation(Quotation* quotation) = 0;	
};