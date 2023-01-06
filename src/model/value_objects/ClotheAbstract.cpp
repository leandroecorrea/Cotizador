#include "ClotheAbstract.h"

float ClotheAbstract::calculatePremiumCharge(float price)
{
	return quality== PREMIUM ? price * PREMIUM_CHARGE_MULTIPLIER : price;
}

ClotheAbstract::ClotheAbstract(Quality quality, float price, int stock) : quality(quality), basePrice(price), stock(stock)
{	
}

ClotheAbstract::~ClotheAbstract()
{
}

Quality ClotheAbstract::getQuality() const
{
	return quality;
}

float ClotheAbstract::getPrice()
{
	return this->basePrice;
}

int ClotheAbstract::getStock()
{
	return stock;
}
