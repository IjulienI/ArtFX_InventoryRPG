#pragma once

#include "item.h"

class nonConsumable : public item
{
public:
	int price;
	virtual void Sell();
};

