#include "mainScene.h"

MainScene::MainScene() {
	Init();
}

MainScene::~MainScene() {

}

void MainScene::Init() {
	InitInventory();
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		for (int j = 0; j < INVENTORY_SIZE; j++) {
			Slot* slot = new Slot({ (float)i * 110 + 50, (float)j * 110 + 50 });
			std::cout << i + j << std::endl;
			if ((i + j) < mInventory.size() && mInventory[i + j] != nullptr) slot->SetItem(mInventory[i + j]);
			mSlots.push_back(slot);
		}
	}
}

void MainScene::Update(float dt) {
	MouseSystem();
	Inputs();
}

void MainScene::Draw() {

	DrawTexture(mBackGround, 0, 0, WHITE);
	DrawRectangle(25, 25, 675, 670, WHITE);
	DrawRectangle(750, 25, 305, 670, WHITE);
	for (Slot* slot : mSlots) {
		slot->Draw();
	}
	if (mpCurrentItem == nullptr) return;

	DrawTexture(mpCurrentItem->GetTexture(), 775, 50, WHITE);
	DrawText(mpCurrentItem->GetName().data(), 900, 50, 24, BLACK);
	DrawText(mpCurrentItem->GetDescription().data(), 775, 150, 16, BLACK);
}




void MainScene::InitInventory()
{
	Texture2D texture = LoadTexture("../src/BaseIcon.png");
	Item* item = new Item((std::string)"Victory", (std::string)"You win", texture, 1, 52, LEGENDARY);
	mInventory.push_back(item);
}

void MainScene::MouseSystem()
{
	mMousePos = { GetMousePosition().x,GetMousePosition().y };

	mMouseOn = GetSlotAtLocation(mMousePos);
	if (!mMouseOn)
		return;
	mMouseOn->SetActive(true);
}

void MainScene::Inputs()
{
	if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
		if (!mMouseOn)
			return;

		mpCurrentItem = mMouseOn->GetItem();
	}
}

Slot* MainScene::GetSlotAtLocation(Vector2 location)
{
	for (int i = 0; i < TILE_NUM.x; i++) {
		for (int j = 0; j < TILE_NUM.y; j++) {
			if (mSlots[i + j]->Contains(location))
				return mSlots[i + j];
		}
	}
	return nullptr;
}
