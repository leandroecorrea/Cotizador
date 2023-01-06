#include "QuotationPresenter.h"
#include "../requests/ShirtQuotationRequest.h"
#include "../requests/PantQuotationRequest.h"
#include "../data/ClotheService.h"
#include "../data/QuotationRepository.h"


QuotationPresenter::QuotationPresenter(INewQuotationView* viewInterface, IEventSystem* eventSystem, int salesmanId, IQuotationRepository* repository) : IPresenter(eventSystem), viewInterface(viewInterface), salesmanId(salesmanId), quotationRepository(repository)
{
	quotationBuilder = nullptr;
}

QuotationPresenter::~QuotationPresenter()
{
	if (quotationBuilder != nullptr)
	{
		delete quotationBuilder;
		quotationBuilder = nullptr;
	}
}

void QuotationPresenter::InitializeView()
{
	viewInterface->showSelectClothe();
}

void QuotationPresenter::onClotheSelected(ClotheChoice choice)
{
	IClotheService* service = new ClotheService();
	if (choice == SHIRT)
	{
		quotationBuilder = new ShirtQuotationRequest(service);
		viewInterface->showSelectSleeve();
	}
	else
	{
		quotationBuilder = new PantQuotationRequest(service);
		viewInterface->showSelectPant();
	}
}

void QuotationPresenter::onSleeveSelected(ShirtSleeve sleeve)
{
	static_cast<ShirtQuotationRequest*>(quotationBuilder)->setSleeve(sleeve);
	viewInterface->showSelectNeck();
}

void QuotationPresenter::onNeckSelected(ShirtNeck neck)
{
	static_cast<ShirtQuotationRequest*>(quotationBuilder)->setNeck(neck);
	viewInterface->showSelectQuality();
}

void QuotationPresenter::onPantFitSelected(PantFit fit)
{
	static_cast<PantQuotationRequest*>(quotationBuilder)->setFit(fit);
	viewInterface->showSelectQuality();
}

void QuotationPresenter::onQualitySelected(Quality quality)
{
	quotationBuilder->setQuality(quality);
	viewInterface->showSelectPrice();
}

void QuotationPresenter::onPriceSet(float price)
{
	quotationBuilder->price = price;
	viewInterface->showSelectQuantity(quotationBuilder->getStock());
}

void QuotationPresenter::onQuantitySelected(int quantity)
{
	quotationBuilder->amount = quantity;
	Quotation* quotation = quotationBuilder->getQuotation(salesmanId);
	quotation->setId(quotationRepository->saveQuotation(quotation));
	viewInterface->showQuotation(new QuotationData(quotation->getId(), quotation->getDate(), quotation->getSalesmanId(), quotation->getClothe()->toString(), quotationBuilder->price, quotationBuilder->amount, quotationBuilder->total));	
}

void QuotationPresenter::onBackToMainMenu()
{
	eventSystem->onReturnToMainMenu();
}
