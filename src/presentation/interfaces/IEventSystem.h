#pragma once
class IEventSystem
{
public:
	virtual void onReturnToMainMenu() = 0;
	virtual void onQuotationHistoryRequested() = 0;
	virtual void onNewQuotationFor(int salesmanId) = 0;
	virtual void onExit() = 0;
};