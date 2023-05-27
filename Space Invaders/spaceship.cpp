#include "spaceship.h"
#include "projectile.h"
#include "raylib.h"

void spaceship::draw() {

	Texture2D main_texture = LoadTexture("spaceship_texture.png");
	main_texture.width /= 10;
	main_texture.height /= 10;
	DrawTexture(main_texture, x, y, WHITE);
}

void spaceship::shoot(projectile& proj) {

	proj.x = x + 25;
	proj.y = y;
	proj.speed = 500;

}