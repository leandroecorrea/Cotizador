#pragma once
#include "../Quality.cpp"
class ClotheAbstract
{
private:
	Quality quality;
	int stock;
	const float PREMIUM_CHARGE_MULTIPLIER = 1.3;
protected:
	float basePrice;
	float calculatePremiumCharge(float price);
public:
	ClotheAbstract(Quality quality, float price, int stock);
	~ClotheAbstract();
	Quality getQuality();
	virtual float getPrice() = 0;
	int getStock();
};

