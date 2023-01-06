#pragma once
#include "../../model/IClotheService.h"
class ClotheService : public IClotheService
{
private:
	const int SHIRT_SHORT_SLEEVE_MAO_STOCK = 100;
	const int SHIRT_SHORT_SLEEVE_NORMAL_STOCK = 150;
	const int SHIRT_LONG_SLEEVE_MAO_STOCK = 75;
	const int SHIRT_LONG_SLEEVE_NORMAL_STOCK = 175;
	const int PANT_STRETCH = 750;
	const int PANT_NORMAL = 250;
public:
	virtual int getShirtStock(ShirtNeck neck, ShirtSleeve sleeve, Quality quality) override;
	virtual int getPantStock(PantFit fit, Quality quality) override;
};
