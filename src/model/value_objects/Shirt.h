#pragma once
#include "ClotheAbstract.h"
#include "../ShirtNeck.cpp"
#include "../ShirtSleeve.cpp"
class Shirt : public ClotheAbstract
{
private:
	ShirtSleeve sleeve;
	ShirtNeck neck;
	const float SLEEVE_DISCOUNT_MULTIPLIER = 0.9f;
	const float NECK_CHARGE_MULTIPLIER = 1.03f;
public:
	Shirt(ShirtNeck neck, ShirtSleeve sleeve, Quality quality, float price, int stock);
	~Shirt();
	float getPrice() override;
	virtual std::string toString() override;

};

