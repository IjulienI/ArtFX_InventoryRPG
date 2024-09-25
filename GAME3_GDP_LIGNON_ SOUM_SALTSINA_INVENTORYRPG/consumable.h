#pragma once

#include "item.h"

class consumable : public item
{
protected :
	enum affects
	{

	};

public:
	virtual void Use();
};

