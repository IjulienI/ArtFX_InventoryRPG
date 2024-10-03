#include "item.h"

Item::Item()
{
}

Item::Item(std::string name, std::string description, Texture2D texture, int amount, int weight, Rarity rarity)
{
	mName = name;
	mDescription = description;
	mAmount = amount;
	mWeight = weight;
	mRarity = rarity;
	mTexture = texture;
}

Item::~Item()
{
}



int Item::Sell()
{
	mAmount--;
	return GetPrice();
}

std::string Item::GetName()
{
	return mName;
}

std::string Item::GetDescription()
{
	return mDescription;
}

int Item::GetAmount()
{
	return mAmount;
}

int Item::GetWeight()
{
	return mWeight;
}

int Item::GetPrice()
{
	return mPrice;
}

Texture2D Item::GetTexture()
{
	return mTexture;
}
