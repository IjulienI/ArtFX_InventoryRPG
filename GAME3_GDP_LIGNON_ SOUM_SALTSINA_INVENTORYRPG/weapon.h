#pragma once

#include "gear.h"

enum WeaponType {
	NONE,
	SWORD,
	BOW,
	STAFF
};
class Weapon : public Gear
{
public:
	Weapon();
	Weapon(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight, WeaponType type, int damage, int price);
	~Weapon();

	int mDamage = 0;
	WeaponType mType = WeaponType::NONE;
};

