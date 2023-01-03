// #pragma once
// class MainView
// {
// private:
//     void InitializeComponent();
//     char separatorLine[48] = "-----------------------------------------------";
// public:
//     void showMainMenu()
//     {
//         bool optionChosen = false;
//         int option;
//         while(!optionChosen)
//         {
//             std::cout << "COTIZADOR EXPRESS - MENÚ PRINCIPAL" << endl;
//             std::cout << separatorLine << endl;
//             std::cout << "Nombre de la tienda | Dirección de la tienda" << endl;
//             std::cout << separatorLine << endl;
//             std::cout << "Nombre y apellido del vendedor | Código del vendedor" << endl;
//             std::cout << separatorLine << endl;
//             std::cout << "SELECCIONE UNA OPCIÓN DEL MENÚ" << endl;
//             std::cout << endl;
//             std::cout << "1) Historial de Cotizaciones" << endl;
//             std::cout << "2) Realizar Cotización" << endl;
//             std::cout << "3) Salir" << endl;
            
//             std::cin >> option;
//             if(IsValid(option))
//             {
//                 optionChosen = true;
//             }
//             else
//             {

//             }
//         }
//         clearScreen();
//         presenter.onOptionChosen();
//     }
// };