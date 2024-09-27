#pragma once

#include "consumable.h"

enum class FoodType
{
	NONE,
	SOUP,
	MEAT,
	JELLY
};

class Food : public Consumable
{
public:

	Food();
	Food(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight, FoodType type, int amountRegen);
	~Food();
	int mAmountRegen = 0;
	FoodType mType = FoodType::NONE;

	void Use() override;
};

