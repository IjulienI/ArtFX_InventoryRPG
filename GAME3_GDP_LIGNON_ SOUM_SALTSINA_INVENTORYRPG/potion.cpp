#include "potion.h"

Potion::Potion()
{
}

Potion::Potion(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight, Buff buff, int level)
{
	mName = name;
	mDescription = description;
	mHiddenDescription = hiddenDesctription;
	mImagePath = imagePath;
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
