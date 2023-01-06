#pragma once
#include "../../model/IStoreRepository.h"
class StoreRepository : public IStoreRepository
{	
	virtual Store getStore() override;
};