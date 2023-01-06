#pragma once
#include "presentation/interfaces/IEventSystem.h"
#include "view/MainView.h"
#include "view/ViewEnum.cpp"
#include "presentation/data/QuotationRepository.h"

class Application : public IEventSystem
{
private:
	IPresenter* currentPresenter;
	IView* currentView;
	void deletePointers();
	ViewEnum viewSelected;
	QuotationRepository* quotationRepository;
public:
	Application();
	~Application();
	void Run();	
	virtual void onReturnToMainMenu() override;
	virtual void onQuotationHistoryRequested() override;
	virtual void onNewQuotationFor(int salesmanId) override;
	virtual void onExit() override;
};