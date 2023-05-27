#include "raylib.h"
#include "spaceship.h"
#include "projectile.h"


int main() {

	InitWindow(450, 800, "Space Invaders");
	SetWindowState(FLAG_VSYNC_HINT);

	spaceship myShip{};
	myShip.x = GetScreenWidth() / 2 - (myShip.main_texture.width / 2) - 25;
	myShip.y = GetScreenHeight() - 200;
	myShip.speed = 200;

	projectile myProj{};
	myProj.x = myShip.x + 25;
	myProj.y = myShip.y;
	myProj.speed = 500;

	while (!WindowShouldClose()) {

		if (IsKeyDown(KEY_UP)) myShip.y -= myShip.speed * GetFrameTime();
		if (IsKeyDown(KEY_DOWN)) myShip.y += myShip.speed * GetFrameTime();
		if (IsKeyDown(KEY_LEFT)) myShip.x -= myShip.speed * GetFrameTime();
		if (IsKeyDown(KEY_RIGHT)) myShip.x += myShip.speed * GetFrameTime();

		if (IsKeyPressed(KEY_SPACE)) myShip.shoot(myProj);


		BeginDrawing();
		ClearBackground(BLACK);
		myShip.draw();
		DrawFPS(10, 10);
		EndDrawing();

	}

	UnloadTexture(myShip.main_texture);

	return 0;
}