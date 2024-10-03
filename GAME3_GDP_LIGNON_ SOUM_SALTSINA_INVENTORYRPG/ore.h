#pragma once

#include "nonConsumable.h"

enum OreType {
	GOLDEN,
	IRON,
	COPPER
};

class Ore : public NonConsumable
{
public:
	Ore();
	Ore(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight);
	~Ore();
};

