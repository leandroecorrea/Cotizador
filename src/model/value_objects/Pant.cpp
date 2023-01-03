#include "Pant.h"

float Pant::getPrice()
{
	return pantfit == STRETCH? ClotheAbstract::getPrice() * STRETCH_DISCOUNT_MULTIPLIER : 
							   ClotheAbstract::getPrice();
	float value = this->basePrice;
	value *= STRETCH ? ClotheAbstract::getPrice() * STRETCH_DISCOUNT_MULTIPLIER : 1;
	return calculatePremiumCharge(value);
}
