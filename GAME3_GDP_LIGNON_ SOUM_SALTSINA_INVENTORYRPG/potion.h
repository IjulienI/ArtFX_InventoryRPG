#pragma once

#include "consumable.h"

enum Buff {
	REGENERATION,
	KNOCKBACK,
	MAGIC
};
class potion : public consumable
{
public:

	int level;
};

