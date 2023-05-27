#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "raylib.h"

struct projectile {

	int x;
	int y;
	float speed;
	bool active;

	void spawn();

};



#endif // !PROJECTILE_H