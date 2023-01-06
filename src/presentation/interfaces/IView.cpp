#include "IView.h"
#include <iostream>

IView::~IView()
{
}


void IView::clearScreen()
{
	system("cls");
}

void IView::printTitle()
{
	clearScreen();
	std::cout << title << std::endl;
	std::cout << separatorLine << std::endl;
	std::cout << backToMainMenu << std::endl;
	std::cout << separatorLine << std::endl;
}

void IView::printQuotation(QuotationData* data)
{
	printTitle();
	std::cout << "Número de identificación: " << data->id << std::endl;
	std::cout << "Fecha y hora de la cotización: " << data->date.toString() << std::endl;
	std::cout << "Código del vendedor " << data->salesmanId << std::endl;
	std::cout << "Prenda cotizada: " << data->clothe << std::endl;
	std::cout << "Precio unitario: " << data->price << std::endl;
	std::cout << "Cantidad de unidades cotizadas: " << data->amount << std::endl;
	std::cout << "Precio final: $" << data->total << std::endl;
	std::cout << separatorLine << std::endl;
	std::cout << backToMainMenu << std::endl;
	std::cout << separatorLine << std::endl;
}
