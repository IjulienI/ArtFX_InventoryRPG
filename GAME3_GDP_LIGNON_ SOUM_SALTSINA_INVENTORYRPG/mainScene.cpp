#include "mainScene.h"

MainScene::MainScene() {
	Init();
}

MainScene::~MainScene() {

}

void MainScene::Init() {

}

void MainScene::Update(float dt) {
	
}

void MainScene::Draw() {

	DrawTexture(mBackGround, 0, 0, WHITE);
	DrawRectangle(25, 25, 675, 670, WHITE);
	DrawRectangle(750, 25, 305, 670, WHITE);
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		for (int j = 0; j < INVENTORY_SIZE; j++) {
			DrawRectangle(i * 110 + 50, j * 110 + 50, 75, 75, BLACK);
		}
	}
}