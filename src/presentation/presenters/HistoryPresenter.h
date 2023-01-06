#pragma once
#include "IPresenter.h"
#include "../../model/IQuotationRepository.h"
#include "../interfaces/IHistoryView.h"
class HistoryPresenter : public IPresenter
{
private:
	IHistoryView* viewInterface;
	IQuotationRepository* repository;
public:
	HistoryPresenter(IHistoryView* view, IQuotationRepository* repository, IEventSystem* eventSystem);
	~HistoryPresenter();


	// Inherited via IPresenter
	virtual void InitializeView() override;

};
