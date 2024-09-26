#pragma once

#include "item.h"
#include <vector>

class Inventory
{
public:
	Inventory();
	~Inventory();
	 
	std::vector<Item*> inventory;

	Item* GetItem(int index);
	void AddItem(Item* item);
	void DestroyItem(int index);
};
