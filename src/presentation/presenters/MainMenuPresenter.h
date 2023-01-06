#pragma once
#include "../interfaces/IMainView.h"
#include "../../model/IStoreRepository.h"
#include "../MainMenuChoice.cpp"
#include "../interfaces/IEventSystem.h"
#include "IPresenter.h"
class MainMenuPresenter : public IPresenter
{
private:
	IMainView* viewInterface;
	IStoreRepository* repository;	
public:
	MainMenuPresenter(IMainView* view, IEventSystem* eventSystem);
	~MainMenuPresenter();
	void handleUserChoice(MainMenuChoice choice);
	void InitializeView() override;
};

