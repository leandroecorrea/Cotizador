#include "PantQuotationRequest.h"

PantQuotationRequest::PantQuotationRequest(IClotheService* repository) : IQuotationBuilder(repository)
{
}

PantQuotationRequest::~PantQuotationRequest()
{
}

Quotation* PantQuotationRequest::getQuotation(int salesmanId)
{
	clothe = new Pant(fit, quality, price, amount);
	return IQuotationBuilder::getQuotation(salesmanId);
}

int PantQuotationRequest::getStock()
{
	return service->getPantStock(fit, quality);
}

void PantQuotationRequest::setFit(PantFit fit)
{
	this->fit = fit;
}
