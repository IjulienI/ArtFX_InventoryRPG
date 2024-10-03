#pragma once

#include "gear.h"

enum class ArmorClass {
	NONE,
	HELMET,
	CHESTPLATE,
	LEGGINGS,
	BOOTS
};
class Armor : public Gear
{
public:
	Armor();
	Armor(std::string name, std::string description, char imagePath, int amount, int weight,Rarity rarity, ArmorClass armorClass, int protection, int price);
	~Armor();

	int mProtection = 0;
	ArmorClass mClass = ArmorClass::NONE;
};

