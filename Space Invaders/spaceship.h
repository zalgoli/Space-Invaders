#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "raylib.h"

struct spaceship {

	int x;
	int y;
	float speed;
	Texture2D main_texture;

	void draw();
	void shoot(projectile& proj);

};

#endif // !SPACESHIP_H