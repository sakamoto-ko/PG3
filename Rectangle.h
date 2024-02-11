#pragma once
#include "IShape.h"

class RectangleShape : IShape
{
private:
	struct RectangleSize {
		Vector2 leftTop;
		Vector2 rightTop;
		Vector2 leftBottom;
		Vector2 rightBottom;
	};

public:
	void Size() override;
	void Draw() override;

private:
	RectangleSize rectangle_ = {
		{1.0f,2.0f},
		{2.0f,2.0f},
		{1.0f,1.0f},
		{2.0f,2.0f}
	};
	float result_ = 0;
};

