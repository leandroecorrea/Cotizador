#pragma once
#include "IPresenter.h"
#include "../interfaces/INewQuotationView.h"
#include "../../model/IQuotationRepository.h"
#include "../ClotheChoice.cpp"
#include "../../model/ShirtSleeve.cpp"
#include "../../model/ShirtNeck.cpp"
#include "../../model/PantFit.cpp"
#include "../requests/IQuotationBuilder.h"
#include "../../model/IClotheService.h"

class QuotationPresenter : public IPresenter
{
private:
	IQuotationRepository* quotationRepository;
	INewQuotationView* viewInterface;
	IQuotationBuilder* quotationBuilder;	
	int salesmanId;
public:
	QuotationPresenter(INewQuotationView* viewInterface, IEventSystem* eventSystem, int salesmanId, IQuotationRepository* repository);
	~QuotationPresenter();	
	void InitializeView() override;
	void onClotheSelected(ClotheChoice choice);
	void onSleeveSelected(ShirtSleeve sleeve);
	void onNeckSelected(ShirtNeck neck);
	void onPantFitSelected(PantFit fit);
	void onQualitySelected(Quality quality);
	void onPriceSet(float price);
	void onQuantitySelected(int quantity);
	void onBackToMainMenu();
};

