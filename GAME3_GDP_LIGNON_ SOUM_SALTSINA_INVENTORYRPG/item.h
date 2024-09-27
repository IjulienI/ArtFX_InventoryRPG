#pragma once

#include "string"
#include "iostream"

enum Rarity {
	NONE,
	COMMUN,
	RARE,
	LEGENDARY
};

class Item
{
public:

	Item();
	Item(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight);
	~Item();

protected:
	std::string mName = "";
	std::string mDescription = "";
	std::string mImagePath = "";
	int mAmount = 0;
	int mWeight = 0;
	int mPrice = 0;
	Rarity mRarity = Rarity::NONE;

public:
	int Sell();
	std::string GetName();
	std::string GetDescription();
	int GetAmount();
	int GetWeight();
	int GetPrice();
};

