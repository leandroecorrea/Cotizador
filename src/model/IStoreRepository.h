#pragma once
#include "entities/Store.h"
class IStoreRepository
{
public:
	virtual ~IStoreRepository() = 0;
	virtual Store getStore() = 0;
};
