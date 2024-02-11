#include "Rectangle.h"

void Rectangle::Size()
{
	float height = rectangle_.rightTop - rectangle_.leftBottom;
	float width = rectangle_.rightBottom - rectangle_.leftBottom;

	result_ = width * height;
}

void Rectangle::Draw()
{
	printf("矩形の面積は %f\n", result_);
}
