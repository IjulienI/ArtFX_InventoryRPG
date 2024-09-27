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
	DrawRectangle(25, 25, 700, 670, WHITE);
	DrawRectangle(750, 25, 305, 670, WHITE);
}