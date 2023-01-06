#include "MainView.h"

bool MainView::isValid(int option)
{
	return option > 0 && option < 4;
}

void MainView::clearScreen()
{
	system("cls");
}

void MainView::renderScreen(StoreData* data)
{
	clearScreen();
	std::cout << "COTIZADOR EXPRESS - MENÚ PRINCIPAL" << std::endl;
	std::cout << separatorLine << std::endl;
	std::cout << data->storeName << " | " << data->storeAddress << std::endl;
	std::cout << separatorLine << std::endl;
	std::cout << data->salesmanName << " | Código del vendedor: " << data->salesmanId << std::endl;
	std::cout << separatorLine << std::endl;
	std::cout << "SELECCIONE UNA OPCIÓN DEL MENÚ" << std::endl;
	std::cout << std::endl;
	std::cout << "1) Historial de Cotizaciones" << std::endl;
	std::cout << "2) Realizar Cotización" << std::endl;
	std::cout << "3) Salir" << std::endl;
}

MainView::MainView()
{
	
}

MainView::~MainView()
{
	
}

void MainView::showMainMenu(StoreData* data)
{
	bool optionChosen = false;
	int option;
	while (!optionChosen)
	{
		clearScreen();
		renderScreen(data);
		std::cin >> option;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else 
		{
			optionChosen = isValid(option);
		}
	}
	delete data;
	presenter->handleUserChoice(static_cast<MainMenuChoice>(option));
}

void MainView::setPresenter(MainMenuPresenter* presenter)
{
	this->presenter = presenter;
}
