#include "IQuotationBuilder.h"

IQuotationBuilder::~IQuotationBuilder()
{
    delete service;
}

IQuotationBuilder::IQuotationBuilder(IClotheService* service) : service(service)
{
    delete clothe;
}

Quotation* IQuotationBuilder::getQuotation(int salesmanId)
{
    total = price * float(amount);
    return new Quotation(DateTime::s_now(), salesmanId, clothe, amount, total);
}

void IQuotationBuilder::setQuality(Quality quality)
{
    this->quality = quality;
}
