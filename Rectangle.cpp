#include "Rectangle.h"

void RectangleShape::Size()
{
	float height = rectangle_.rightTop.y - rectangle_.rightBottom.y;
	float width = rectangle_.rightBottom.x - rectangle_.leftBottom.x;

	result_ = width * height;
}

void RectangleShape::Draw()
{
	printf("矩形の面積は %f\n", result_);
}
