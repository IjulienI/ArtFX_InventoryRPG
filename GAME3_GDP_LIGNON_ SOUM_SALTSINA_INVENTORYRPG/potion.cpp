#include "potion.h"

Potion::Potion()
{
}

Potion::Potion(std::string name, std::string description, char imagePath, int amount, int weight, Buff buff, int level)
{
	mName = name;
	mDescription = description;
	mAmount = amount;
	mWeight = weight;
	mBuff = buff;
	mLevel = level;
}

Potion::~Potion()
{
}

void Potion::Use()
{
}
