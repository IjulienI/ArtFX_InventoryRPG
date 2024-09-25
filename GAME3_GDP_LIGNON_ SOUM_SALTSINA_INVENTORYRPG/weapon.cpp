#include "weapon.h"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name, std::string description, std::string hiddenDesctription, std::string imagePath, int amount, int weight, WeaponType type, int damage, int price)
{
	mName = name;
	mDescription = description;
	mHiddenDescription = hiddenDesctription;
	mImagePath = imagePath;
	mAmount = amount;
	mWeight = weight;
	mDamage = damage;
	mType = type;
	mPrice = price;
}

Weapon::~Weapon()
{
}
