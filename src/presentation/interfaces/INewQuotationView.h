#pragma once
#include "IView.h"
#include "../output_models/QuotationData.h"
class INewQuotationView : public IView
{
public:
	virtual ~INewQuotationView() = 0;
	virtual void showSelectClothe() = 0;
	virtual void showSelectSleeve() = 0;
	virtual void showSelectNeck() = 0;
	virtual void showSelectPant() = 0;
	virtual void showSelectQuality() = 0;
	virtual void showSelectPrice() = 0;
	virtual void showSelectQuantity(int stockAvailable) = 0;
	virtual void showQuotation(QuotationData* data) = 0;
};