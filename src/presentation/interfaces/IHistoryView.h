#pragma once
#include "IView.h"
#include <vector>
#include "../output_models/QuotationData.h"
class IHistoryView : public IView
{
public:
	virtual ~IHistoryView() = 0;
	virtual void showHistory(std::vector<QuotationData*>* data) = 0;
};
