#include "item.h"

Item::Item()
{
}

Item::Item(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight)
{
	mName = name;
	mDescription = description;
	mHiddenDescription = hiddenDesctription;
	mImagePath = imagePath;
	mAmount = amount;
	mWeight = weight;
}

Item::~Item()
{
}

std::string Item::GetName()
{
	return mName;
}

std::string Item::GetDescription()
{
	return mDescription;
}

std::string Item::GetHiddenDescription()
{
	return mHiddenDescription;
}

int Item::GetAmount()
{
	return mAmount;
}

int Item::GetWeight()
{
	return mWeight;
}
