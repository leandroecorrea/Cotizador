#pragma once
#include "../../model/value_objects/ClotheAbstract.h"
#include "IQuotationBuilder.h"
#include "../../model/ShirtNeck.cpp"
#include "../../model/ShirtSleeve.cpp"
class ShirtQuotationRequest : public IQuotationBuilder
{
public:
	ShirtQuotationRequest(IClotheService* repository);
	~ShirtQuotationRequest();
	ShirtSleeve sleeve;
	ShirtNeck neck;		
	virtual Quotation* getQuotation(int salesmanId) override;
	void setSleeve(ShirtSleeve sleeve);
	void setNeck(ShirtNeck neck);
	virtual int getStock() override;
};