#include "food.h"

Food::Food()
{
}

Food::Food(std::string name, std::string description, char imagePath, int amount, int weight, FoodType type, int amountRegen)
{
	mName = name;
	mDescription = description;
	mAmount = amount;
	mWeight = weight;
	mType = type;
	mAmountRegen = amountRegen;
}

Food::~Food()
{
}

void Food::Use()
{
	std::cout << "You gain " << mAmountRegen << "health" << std::endl;
}
