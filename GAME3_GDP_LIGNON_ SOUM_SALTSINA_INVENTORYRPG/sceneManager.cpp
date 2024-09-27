#include "sceneManager.h"

SceneManager* sceneManager = nullptr;

SceneManager::SceneManager() {
	this->currentScene = nullptr;
	Init();
}

SceneManager::~SceneManager() {
}

void SceneManager::Update(float dt) {
	currentScene->Update(dt);
}

void SceneManager::Draw() {
	currentScene->Draw();
}

void SceneManager::Init() {
	ChangeScene(Scenes::BASE);
}

void SceneManager::ChangeScene(Scenes newScene) {
	if (currentScene != nullptr) {
		currentScene->~Scene();
	}
	switch (newScene)
	{
	case Scenes::BASE:
		currentScene = new MainScene();
		break;
	}
}

void SceneManager::LoadMap(int index) {
	//currentScene = new Game(index);
}