#pragma once
#include "../presentation/interfaces/IHistoryView.h"

class HistoryView : public IHistoryView
{
public:
	HistoryView();
	~HistoryView();
	virtual void showHistory(std::vector<QuotationData*>* data) override;
};