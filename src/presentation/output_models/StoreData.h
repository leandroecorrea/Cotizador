#pragma once
#include <string>
class StoreData
{
public:
	StoreData(std::string storeName, std::string storeAddress, std::string salesmanName, int salesmanId);
	std::string storeName;
	std::string storeAddress;
	std::string salesmanName;
	int salesmanId;
};
