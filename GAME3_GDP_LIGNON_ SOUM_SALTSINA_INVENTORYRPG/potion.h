#pragma once

#include "consumable.h"

enum Buff {
	NONE,
	REGENERATION,
	KNOCKBACK,
	MAGIC
};

class Potion : public Consumable
{
public:

	Potion();
	Potion(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight, Buff buff, int level);
	~Potion();

	int mLevel = 0;
	Buff mBuff = Buff::NONE;

	void Use() override;
};

	