#pragma once

#include "string"
#include "iostream"
#include "constant.h"

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
	Item(std::string name, std::string description, Texture2D texture, int amount, int weight, Rarity rarity);
	~Item();

protected:
	std::string mName = "";
	std::string mDescription = "";
	Texture2D mTexture;
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
	Texture2D GetTexture();
};

