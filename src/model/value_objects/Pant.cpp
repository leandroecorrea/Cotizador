#include "Pant.h"
#include <string>

Pant::Pant(PantFit fit, Quality quality, float price, int stock) : ClotheAbstract(quality, price, stock)
{
	this->pantfit = fit;
}

Pant::~Pant()
{
}

float Pant::getPrice()
{	
	float value = this->basePrice;
	value *= this->pantfit == STRETCH ? STRETCH_DISCOUNT_MULTIPLIER : 1;
	return calculatePremiumCharge(value);
}

std::string Pant::toString()
{
	std::string stringQuality = this->quality == PREMIUM ? "Premium" : "Estandar";
	return "Pantalon - " + (this->pantfit == STRETCH ? "Chupin - " : "Normal - " + stringQuality);
}
