#include "MainMenuPresenter.h"
#include "../data/StoreRepository.h"
#include "../output_models/StoreData.h"




MainMenuPresenter::MainMenuPresenter(IMainView* view, IEventSystem* eventSystem) : IPresenter(eventSystem), viewInterface(view)
{	
	this->repository = new StoreRepository();
}

MainMenuPresenter::~MainMenuPresenter()
{
	if (repository != nullptr)
		delete repository;
}

void MainMenuPresenter::handleUserChoice(MainMenuChoice choice)
{
	switch (choice)
	{
	case HISTORY:
		eventSystem->onQuotationHistoryRequested();
		break;
	case QUOTATION:
		eventSystem->onNewQuotationFor(repository->getStore().getSalesman()->getId());
		break;
	case EXIT:
		eventSystem->onExit();
		break;
	default:
		break;
	}
}

void MainMenuPresenter::InitializeView()
{	
	Store store = repository->getStore();
	StoreData* data = new StoreData(store.getName(), store.getAddress()->toString(), store.getSalesman()->getFullName(), store.getSalesman()->getId());
	viewInterface->showMainMenu(data);
}


