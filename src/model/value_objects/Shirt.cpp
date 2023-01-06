#include "Shirt.h"
#include <string>

Shirt::Shirt(ShirtNeck neck, ShirtSleeve sleeve, Quality quality, float price, int stock) : ClotheAbstract(quality, price, stock), sleeve(sleeve), neck(neck)
{
}

Shirt::~Shirt()
{
}

float Shirt::getPrice()
{
	float value = this->basePrice;
	value *= this->sleeve == SHORT ? SLEEVE_DISCOUNT_MULTIPLIER : 1;
	value *= this->neck == MAO ? NECK_CHARGE_MULTIPLIER : 1;
	return calculatePremiumCharge(value);
}

std::string Shirt::toString()
{
	std::string sleeveString = (this->sleeve == SHORT ? "Manga corta - " : "Manga larga - ");
	std::string shirtQuality = this->quality == PREMIUM ? "Premium" : "Estandar";
	return "Camisa - " + sleeveString + shirtQuality;
}
