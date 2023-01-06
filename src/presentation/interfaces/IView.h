#pragma once
#include "../output_models/QuotationData.h"
class IView
{
protected:
	std::string separatorLine = "-----------------------------------------------";
	std::string title = "COTIZADOR EXPRESS - COTIZAR";
	std::string backToMainMenu = "Presiona 3 para volver al menú principal";
	void clearScreen();
	void printTitle();
	void printQuotation(QuotationData* data);
public:
	virtual ~IView() = 0;
};