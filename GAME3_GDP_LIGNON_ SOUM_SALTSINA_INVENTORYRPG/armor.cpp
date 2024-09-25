#include "armor.h"

Armor::Armor()
{
}

Armor::Armor(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight, ArmorClass armorClass, int protection, int price)
{
	mName = name;
	mDescription = description;
	mHiddenDescription = hiddenDesctription;
	mImagePath = imagePath;
	mAmount = amount;
	mWeight = weight;
	mClass = armorClass;
	mProtection = protection;
	mPrice = price;
}

Armor::~Armor()
{
}
