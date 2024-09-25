#pragma once

#include "nonConsumable.h"

enum Type {
	GOLD,
	IRON,
	COPPER
};
class Ore : public nonConsumable
{
public:

	void Sell() override;
};

