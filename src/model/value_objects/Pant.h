#pragma once
#include "ClotheAbstract.h"
#include "../PantFit.cpp"
class Pant : public ClotheAbstract
{
private:
	PantFit pantfit;
	const float STRETCH_DISCOUNT_MULTIPLIER = 0.88f;
public:
	Pant(PantFit fit, Quality quality, float price, int stock);
	~Pant();
	float getPrice() override;
	virtual std::string toString() override;
};

