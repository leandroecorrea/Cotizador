#include "NewQuotationView.h"
#include <iostream>

template <typename T>
T showScreenAndGetInput(std::function<void()> screenBehaviour, std::function<bool(T)> checkInput)
{
	bool validOption = false;
	T option;
	while (!validOption)
	{
		screenBehaviour();
		std::cin >> option;		
		if (std::cin.fail()) 
		{	
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			validOption = checkInput(option);		
		}
	}
	return option;
}

void NewQuotationView::printClotheSelection()
{
	printTitle();
	std::cout << "PASO 1: Selecciona la prenda a cotizar:" << std::endl;
	std::cout << "1) Camisa" << std::endl;
	std::cout << "2) Pantalon" << std::endl;
	std::cout << separatorLine << std::endl;
}

void NewQuotationView::printSleeveSelection()
{
	printTitle();
	std::cout << "PASO 2.a: La camisa a cotizar, ¿Es Manga corta?" << std::endl;
	std::cout << "1) Sí" << std::endl;
	std::cout << "2) No" << std::endl;
	std::cout << separatorLine << std::endl;
}

void NewQuotationView::printNeckSelection()
{
	printTitle();
	std::cout << "PASO 2.b: La camisa a cotizar, ¿Es Cuello Mao?" << std::endl;
	std::cout << "1) Sí" << std::endl;
	std::cout << "2) No" << std::endl;
	std::cout << separatorLine << std::endl;
}

void NewQuotationView::printPantSelection()
{
	printTitle();
	std::cout << "PASO 2: El pantalón a cotizar, ¿Es chupín?" << std::endl;
	std::cout << "1) Sí" << std::endl;
	std::cout << "2) No" << std::endl;
	std::cout << separatorLine << std::endl;
}

void NewQuotationView::printQualitySelection()
{
	printTitle();
	std::cout << "PASO 3: Seleccionar la calidad de la prenda" << std::endl;
	std::cout << "1) Estándar" << std::endl;
	std::cout << "2) Premium" << std::endl;
	std::cout << separatorLine << std::endl;
}

void NewQuotationView::printSelectPrice()
{
	printTitle();
	std::cout << "PASO 4: Ingrese el precio unitario de la prenda a cotizar" << std::endl;
}



NewQuotationView::NewQuotationView()
{
}

NewQuotationView::~NewQuotationView()
{
}

void NewQuotationView::setPresenter(QuotationPresenter* presenter)
{
	this->presenter = presenter;
}

void NewQuotationView::showSelectClothe()
{
	int option = showScreenAndGetInput<int>(std::bind(&NewQuotationView::printClotheSelection, this), validateOptions);
	if (option != 3)
	{
		presenter->onClotheSelected(ClotheChoice(option));
		return;
	}
	presenter->onBackToMainMenu();
}

void NewQuotationView::showSelectSleeve()
{
	int option = showScreenAndGetInput<int>(std::bind(&NewQuotationView::printSleeveSelection, this), validateOptions);
	if (option != 3)
	{
		presenter->onSleeveSelected(ShirtSleeve(option));
		return;
	}
	presenter->onBackToMainMenu();
}

void NewQuotationView::showSelectNeck()
{
	int option = showScreenAndGetInput<int>(std::bind(&NewQuotationView::printNeckSelection, this), validateOptions);
	if (option != 3)
	{
		presenter->onNeckSelected(ShirtNeck(option));
		return;
	}
	presenter->onBackToMainMenu();
}

void NewQuotationView::showSelectPant()
{
	int option = showScreenAndGetInput<int>(std::bind(&NewQuotationView::printPantSelection, this), validateOptions);
	if (option != 3)
	{
		presenter->onPantFitSelected(PantFit(option));
		return;
	}
	presenter->onBackToMainMenu();
}

void NewQuotationView::showSelectQuality()
{
	int option = showScreenAndGetInput<int>(std::bind(&NewQuotationView::printQualitySelection, this), validateOptions);
	if (option != 3)
	{
		presenter->onQualitySelected(Quality(option));
		return;
	}
	presenter->onBackToMainMenu();
}

void NewQuotationView::showSelectPrice()
{
	float value = showScreenAndGetInput<float>(std::bind(&NewQuotationView::printSelectPrice, this), [](float value_) {
		return true;
		});
	presenter->onPriceSet(value);
}

void NewQuotationView::showSelectQuantity(int stockAvailable)
{
	auto printSelectQuantity = std::bind([&]()
		{
			printTitle();
			std::cout << "INFORMACIÓN:" << std::endl;
			std::cout << "EXISTEN " << stockAvailable << " CANTIDAD DE UNIDADES EN STOCK DE LA PRENDA COTIZADA" << std::endl;
			std::cout << "\n";
			std::cout << "PASO 5: Ingrese la cantidad de unidades a cotizar" << std::endl;
		});
	int amount = showScreenAndGetInput<int>(std::bind(printSelectQuantity, this), [&](int amount) { 
		
		if (amount <= stockAvailable)
		{
			return true;
		}
		char key;
		std::cout << "No se puede solicitar una cotización por encima del stock disponible" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get(key);
		return false;
		});
	presenter->onQuantitySelected(amount);
}

void NewQuotationView::showQuotation(QuotationData* data)
{
	int option = 0;
	while (option != 3)
	{
		printQuotation(data);
		std::cin >> option;
	}
	presenter->onBackToMainMenu();
}


