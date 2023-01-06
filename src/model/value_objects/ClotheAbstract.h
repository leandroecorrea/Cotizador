#pragma once
#include "../Quality.cpp"
#include <string>
class ClotheAbstract
{
private:
	int stock;
	const float PREMIUM_CHARGE_MULTIPLIER = 1.3f;
protected:
	Quality quality;
	float basePrice;
	float calculatePremiumCharge(float price);
public:
	ClotheAbstract(Quality quality, float price, int stock);
	virtual ~ClotheAbstract() = 0;
	Quality getQuality() const;
	virtual float getPrice();
	int getStock();
	virtual std::string toString() = 0;
};

