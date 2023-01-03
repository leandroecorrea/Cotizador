#include "ClotheAbstract.h"

float ClotheAbstract::calculatePremiumCharge(float price)
{
	return quality== PREMIUM ? price * PREMIUM_CHARGE_MULTIPLIER : price;
}

ClotheAbstract::ClotheAbstract(Quality quality, float price, int stock)
{
	this->quality = quality;
	this->basePrice = price;
	this->stock = stock;
}
