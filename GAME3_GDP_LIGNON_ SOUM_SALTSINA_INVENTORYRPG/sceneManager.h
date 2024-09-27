#pragma once
#include "scene.h"
#include "mainScene.h"

enum class Scenes {
	BASE
};

class SceneManager {
public:
	SceneManager();
	~SceneManager();

	void Update(float dt);
	void Draw();

	void ChangeScene(Scenes newScene);
	void LoadMap(int index);
private:
	Scene* currentScene;
	void Init();
};
extern SceneManager* sceneManager;