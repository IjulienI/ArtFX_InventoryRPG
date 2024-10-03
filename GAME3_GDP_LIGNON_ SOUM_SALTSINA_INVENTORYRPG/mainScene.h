#pragma once
#include "scene.h"
#include "sceneManager.h"

#include "constant.h"
#include "vector"
#include <algorithm>
#include <iostream>
#include "item.h"
#include "Slot.h"

class MainScene : public Scene {
public:
	MainScene();
	~MainScene();

	void Init() override;
	void Update(float dt) override;
	void Draw() override;

private:
	Texture2D mBackGround = LoadTexture("../src/BackGroundImage.png");

	std::vector<Item*> mInventory;
	std::vector<Slot*> mSlots;
	Item* mpCurrentItem = nullptr;

	Vector2 mMousePos;
	Slot* mMouseOn = nullptr;

	void InitInventory();
	void MouseSystem();
	void Inputs();
	Slot* GetSlotAtLocation(Vector2 location);	
};
