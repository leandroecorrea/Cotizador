#include "Shirt.h"

float Shirt::getPrice()
{
	float value = this->basePrice;
	value *= sleeve == SHORT ? SLEEVE_DISCOUNT_MULTIPLIER : 1;
	value *= neck == MAO ? NECK_CHARGE_MULTIPLIER : 1;
	return calculatePremiumCharge(value);
}
