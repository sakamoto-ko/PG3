#pragma once
#include "IShape.h"

class Rectangle : IShape
{
private:
	struct RectangleSize {
		float leftTop;
		float rightTop;
		float leftBottom;
		float rightBottom;
	};

public:
	void Size() override;
	void Draw() override;

private:
	RectangleSize rectangle_;
	float result_ = 0;
};

