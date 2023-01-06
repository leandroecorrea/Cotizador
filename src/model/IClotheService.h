#pragma once
#include "ShirtNeck.cpp"
#include "Quality.cpp"
#include "ShirtSleeve.cpp"
#include "PantFit.cpp"
class IClotheService
{
public:
	virtual ~IClotheService() = 0;
	virtual int getShirtStock(ShirtNeck neck, ShirtSleeve sleeve, Quality quality) = 0;
	virtual int getPantStock(PantFit fit, Quality quality) = 0;
};