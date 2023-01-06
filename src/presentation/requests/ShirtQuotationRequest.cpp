#include "ShirtQuotationRequest.h"
#include "../../model/value_objects/Shirt.h"

ShirtQuotationRequest::ShirtQuotationRequest(IClotheService* repository) : IQuotationBuilder(repository)
{
    
}

ShirtQuotationRequest::~ShirtQuotationRequest()
{
    
}

Quotation* ShirtQuotationRequest::getQuotation(int salesmanId)
{    
    clothe = new Shirt(neck, sleeve, quality, price, amount);
    return IQuotationBuilder::getQuotation(salesmanId);
}

void ShirtQuotationRequest::setSleeve(ShirtSleeve sleeve)
{
    this->sleeve = sleeve;
}

void ShirtQuotationRequest::setNeck(ShirtNeck neck)
{
    this->neck = neck;
}

int ShirtQuotationRequest::getStock()
{
    return service->getShirtStock(neck, sleeve, quality);
}
