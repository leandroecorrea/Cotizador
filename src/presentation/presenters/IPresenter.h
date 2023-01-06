#pragma once
#include "../interfaces/IEventSystem.h"
class IPresenter
{
protected:
	IEventSystem* eventSystem;
public:
	IPresenter(IEventSystem* eventSystem);
	virtual ~IPresenter() = 0;
	virtual void InitializeView() = 0;
};