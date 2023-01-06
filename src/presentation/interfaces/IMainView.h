#pragma once
#include "../output_models/StoreData.h"
#include "IView.h"

class IMainView: public IView
{
public:		
	virtual void showMainMenu(StoreData* data) = 0;
	virtual ~IMainView() = 0;
};
