 #pragma once
#include <iostream>
#include "../presentation/interfaces/IMainView.h"
#include "../presentation/presenters/MainMenuPresenter.h"
#include <string>
 class MainView : public IMainView
 {
 private:     
     std::string separatorLine = "-----------------------------------------------";
     MainMenuPresenter* presenter;
     bool isValid(int option);
     void clearScreen();
     void renderScreen(StoreData* data);
 public:
     MainView();
     ~MainView();
     void showMainMenu(StoreData* data) override;
     void setPresenter(MainMenuPresenter* presenter);
 };