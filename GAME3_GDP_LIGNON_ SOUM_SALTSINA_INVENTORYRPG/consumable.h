#pragma once

#include "item.h"

class Consumable : public Item
{
public:
	virtual void Use();
};

