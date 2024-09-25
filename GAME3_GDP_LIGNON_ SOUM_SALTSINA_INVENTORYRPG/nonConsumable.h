#pragma once

#include "item.h"

class NonConsumable : public Item
{
public:
	NonConsumable();
	~NonConsumable();

private:
	int mPrice = 0;

public:
	int Sell();
	int GetPrice();
};
