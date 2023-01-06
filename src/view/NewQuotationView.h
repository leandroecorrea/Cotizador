#pragma once
#include "../presentation/interfaces/INewQuotationView.h"
#include "../presentation/presenters/QuotationPresenter.h"
#include <functional>


class NewQuotationView : public INewQuotationView
{
private:
	QuotationPresenter* presenter;	
	std::function<bool(int)> validateOptions = [](int option) { return option == 1 || option == 2 || option == 3; };		
	void printClotheSelection();
	void printSleeveSelection();
	void printNeckSelection();
	void printPantSelection();
	void printQualitySelection();
	void printSelectPrice();	
	
public:
	NewQuotationView();
	~NewQuotationView();
	virtual void setPresenter(QuotationPresenter* presenter);
	virtual void showSelectClothe() override;
	virtual void showSelectSleeve() override;
	virtual void showSelectNeck() override;
	virtual void showSelectPant() override;
	virtual void showSelectQuality() override;
	virtual void showSelectPrice() override;
	virtual void showSelectQuantity(int stockAvailable) override;
	virtual void showQuotation(QuotationData* data) override;	
};