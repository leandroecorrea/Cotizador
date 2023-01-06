#include "HistoryPresenter.h"

HistoryPresenter::HistoryPresenter(IHistoryView* view, IQuotationRepository* repository, IEventSystem* eventSystem): IPresenter(eventSystem), viewInterface(view), repository(repository)
{
}

HistoryPresenter::~HistoryPresenter()
{
}

void HistoryPresenter::InitializeView()
{	
	std::vector<QuotationData*>* data = new std::vector<QuotationData*>();
	for (Quotation* quotation: repository->getQuotations())
	{
		float total = quotation->getTotal() / quotation->getUnits();
		data->push_back(new QuotationData(quotation->getId(), quotation->getDate(), quotation->getSalesmanId(), quotation->getClothe()->toString(), total, quotation->getUnits(), quotation->getTotal()));
	}	
	viewInterface->showHistory(data);
	eventSystem->onReturnToMainMenu();
}
