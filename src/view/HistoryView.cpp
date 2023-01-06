#include "HistoryView.h"
#include <iostream>

HistoryView::HistoryView()
{
}

HistoryView::~HistoryView()
{
}

void HistoryView::showHistory(std::vector<QuotationData*>* data)
{
	int option = 0;
	while (option != 3)
	{
		printTitle();
		if (data->size() == 0)
			std::cout << "No existen cotizaciones que mostrar" << std::endl;
		for (int i = 0; i < data->size(); i++)
		{		
			std::cout << "Número de identificación: " << data->at(i)->id << std::endl;
			std::cout << "Fecha y hora de la cotización: " << data->at(i)->date.toString() << std::endl;
			std::cout << "Código del vendedor " << data->at(i)->salesmanId << std::endl;
			std::cout << "Prenda cotizada: " << data->at(i)->clothe << std::endl;
			std::cout << "Precio unitario: " << data->at(i)->price << std::endl;
			std::cout << "Cantidad de unidades cotizadas: " << data->at(i)->amount << std::endl;
			std::cout << "Precio final: $" << data->at(i)->total << std::endl;
			std::cout << separatorLine << std::endl;			
			std::cout << separatorLine << std::endl;
		}
		std::cin >> option;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	for (int i = 0; i < data->size(); i++)
	{
			delete data->at(i);
	}
	data->clear();	
}
