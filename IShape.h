#pragma once
#include <stdio.h>

class IShape
{
public:
	struct Vector2 {
		float x;
		float y;
	};

	virtual void Size() = 0;
	virtual void Draw() = 0;
};

