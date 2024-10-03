#include "armor.h"

Armor::Armor()
{
}

Armor::Armor(std::string name, std::string description, char imagePath, int amount, int weight, Rarity rarity, ArmorClass armorClass, int protection, int price)
{
	mName = name;
	mDescription = description;
	mAmount = amount;
	mWeight = weight;
	mClass = armorClass;
	mProtection = protection;
	mPrice = price;
}

Armor::~Armor()
{
}
