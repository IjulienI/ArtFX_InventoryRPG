#include "item.h"

Item::Item()
{
}

Item::Item(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight)
{
	mName = name;
	mDescription = description;
	mImagePath = imagePath;
	mAmount = amount;
	mWeight = weight;
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
