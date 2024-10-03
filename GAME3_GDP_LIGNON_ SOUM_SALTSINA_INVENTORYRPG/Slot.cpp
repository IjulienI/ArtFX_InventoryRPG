#include "Slot.h"

Slot::Slot()
{

}

Slot::Slot(Vector2 location)
{
	mLocation = location;
}

void Slot::SetItem(Item* item)
{
	mpItem = item;
}

bool Slot::Contains(Vector2 location)
{
	return (location.x >= this->mLocation.x && location.x <= this->mLocation.x + mSize && location.y >= this->mLocation.y && location.y <= this->mLocation.y + mSize);
}

void Slot::SetActive(bool value)
{
	mIsActive = value;
}

Item* Slot::GetItem()
{
	return mpItem;
}

void Slot::Update()
{
}

void Slot::Draw()
{
	if(mIsActive == false) DrawRectangle(mLocation.x, mLocation.y, mSize, mSize, BLACK);
	else DrawRectangle(mLocation.x, mLocation.y, mSize, mSize, GRAY);
	mIsActive = false;

	if(mpItem != nullptr) DrawTexture(mpItem->GetTexture(), mLocation.x + 5, mLocation.y + 5, WHITE);
}
