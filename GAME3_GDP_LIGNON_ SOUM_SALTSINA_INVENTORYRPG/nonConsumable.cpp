#include "nonConsumable.h"

NonConsumable::NonConsumable()
{
}

NonConsumable::~NonConsumable()
{
}

int NonConsumable::Sell()
{
	mAmount--;
	return GetPrice();
}

int NonConsumable::GetPrice()
{
	return mPrice;
}
