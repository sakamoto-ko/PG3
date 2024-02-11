#pragma once
#include "IShape.h"

class Circle : IShape
{
private:
	struct CircleSize {
		float radius;
	};

public:
	void Size() override;
	void Draw() override;

private:
	const float PI = 3.14f;
	CircleSize circle_;
	float result_ = 0;
};

