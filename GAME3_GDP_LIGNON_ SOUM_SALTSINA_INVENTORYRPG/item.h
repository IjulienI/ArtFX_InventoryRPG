#pragma once

#include "string"
#include "iostream"

class Item
{
public:

	Item();
	Item(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight);
	~Item();

protected:
	std::string mName = "";
	std::string mDescription = "";
	std::string mHiddenDescription = "";
	std::string mImagePath = "";
	int mAmount = 0;
	int mWeight = 0;

public:
	std::string GetName();
	std::string GetDescription();
	std::string GetHiddenDescription();
	int GetAmount();
	int GetWeight();
};

