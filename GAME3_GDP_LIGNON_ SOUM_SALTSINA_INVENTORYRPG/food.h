#pragma once

#include "consumable.h"

enum Type
{

};
class food : public consumable
{
public:

	int amountRegen;

	void Use() override;
};

