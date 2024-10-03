#include "application.h"

Application* app = nullptr;

Application::Application()
{
	Init();
}
Application::~Application() {
}

void Application::Init()
{
	InitWindow(WINDOW_SIZE.x, WINDOW_SIZE.y, "Inventory - ArtFx");
	//SetWindowState(FLAG_FULLSCREEN_MODE);
	SetTargetFPS(FRAME_LIMIT);

	sceneManager = new SceneManager();

	while (!WindowShouldClose()) {
		Update();
		Draw();
	}
	CloseWindow();
}

void Application::Update()
{
	float deltaTime = GetFrameTime();
	sceneManager->Update(deltaTime);
}

void Application::Draw()
{
	BeginDrawing();

	ClearBackground(BACKGROUND_COLORATION);

	sceneManager->Draw();

	EndDrawing();
}