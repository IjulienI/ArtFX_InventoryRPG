#include "inventory.h"

Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

Item* Inventory::GetItem(int index)
{
	return inventory[index];
}

void Inventory::AddItem(Item* item)
{
	inventory.push_back(item);
}

void Inventory::DestroyItem(int index)
{
	std::vector<Item*>::iterator it = std::find(inventory.begin(), inventory.end(), inventory[index]);
	inventory[index]->~Item();
	inventory.erase(it);
}
