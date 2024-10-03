#include "weapon.h"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name, std::string description, char imagePath, int amount, int weight, WeaponType type, int damage, int price)
{
	mName = name;
	mDescription = description;
	mAmount = amount;
	mWeight = weight;
	mDamage = damage;
	mType = type;
	mPrice = price;
}

Weapon::~Weapon()
{
}
