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
	Armor(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight, ArmorClass armorClass, int protection, int price);
	~Armor();

	int mProtection = 0;
	ArmorClass mClass = ArmorClass::NONE;
};

