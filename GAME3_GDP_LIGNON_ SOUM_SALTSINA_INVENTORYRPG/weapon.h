#pragma once

#include "gear.h"

enum Type {

};
class weapon : public gear
{
public:
	float damage;

	void Equip() override;
};

