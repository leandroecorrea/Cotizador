#include "QuotationRepository.h"

std::vector<Quotation*> QuotationRepository::getQuotations()
{
    return this->quotations;
}

int QuotationRepository::saveQuotation(Quotation* quotation)
{
    this->quotations.push_back(quotation);
    return quotations.size();
}
