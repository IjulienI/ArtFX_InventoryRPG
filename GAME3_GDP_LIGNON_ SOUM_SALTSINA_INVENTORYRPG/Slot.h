#pragma once

#include "constant.h"
#include "item.h"

class Slot
{
public:
	Slot();
	Slot(Vector2 location);

	void Update();
	void Draw();

	void SetItem(Item* item);
	bool Contains(Vector2 location);
	void SetActive(bool value);
	Item* GetItem();
private:

	Item* mpItem = nullptr;
	float mSize = 75;
	Vector2 mLocation = { 0,0 };
	bool mIsActive = false;
};

