#pragma once
#include "scene.h"
#include "sceneManager.h"

#include "constant.h"
#include "vector"
#include <algorithm>
#include <iostream>

class MainScene : public Scene {
public:
	MainScene();
	~MainScene();

	void Init() override;
	void Update(float dt) override;
	void Draw() override;

private:
	Texture2D mBackGround = LoadTexture("../src/BackGroundImage.png");
};