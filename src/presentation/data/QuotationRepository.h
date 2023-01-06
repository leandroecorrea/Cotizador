#pragma once
#include "../../model/IQuotationRepository.h"
class QuotationRepository : public IQuotationRepository
{
private:
	std::vector<Quotation*> quotations;
public:
	virtual std::vector<Quotation*> getQuotations() override;
	virtual int saveQuotation(Quotation* quotation) override;	
};