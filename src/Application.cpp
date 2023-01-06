#include "Application.h"
#include "view/NewQuotationView.h"
#include "view/HistoryView.h"
#include "presentation/presenters/HistoryPresenter.h"


void Application::deletePointers()
{
	delete currentPresenter;
	delete currentView;
}

Application::Application()
{
	viewSelected = MAIN_MENU;
	MainView* mainView = new MainView();
	currentView = mainView;
	MainMenuPresenter* mainMenuPresenter = new MainMenuPresenter(mainView, this);
	mainView->setPresenter(mainMenuPresenter);
	currentPresenter = mainMenuPresenter;
	quotationRepository = new QuotationRepository();
}

Application::~Application()
{
	deletePointers();
	delete quotationRepository;
}

void Application::Run()
{
	while (viewSelected != EXIT_PROGRAM)
	{
		currentPresenter->InitializeView();
	}
}

void Application::onReturnToMainMenu()
{
	deletePointers();
	viewSelected = MAIN_MENU;
	MainView* mainView = new MainView();
	currentView = mainView;
	MainMenuPresenter* mainMenuPresenter = new MainMenuPresenter(mainView, this);
	mainView->setPresenter(mainMenuPresenter);
	currentPresenter = mainMenuPresenter;
}

void Application::onQuotationHistoryRequested()
{
	deletePointers();
	viewSelected = QUOTATION_HISTORY;
	HistoryView* view = new HistoryView();
	currentView = view;	
	HistoryPresenter* presenter = new HistoryPresenter(view, quotationRepository, this);
	currentPresenter = presenter;
}

void Application::onNewQuotationFor(int salesmanId)
{
	deletePointers();
	viewSelected = NEW_QUOTATION;
	NewQuotationView* view = new NewQuotationView();
	currentView = view;
	QuotationPresenter* presenter = new QuotationPresenter(view, this, salesmanId, quotationRepository);
	view->setPresenter(presenter);
	currentPresenter = presenter;
}

void Application::onExit()
{
	viewSelected = EXIT_PROGRAM;
}
