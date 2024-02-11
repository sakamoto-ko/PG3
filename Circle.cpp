#include "Circle.h"

void Circle::Size()
{
	result_ = circle_.radius * circle_.radius * PI;
}

void Circle::Draw()
{
	printf("円の面積は %f\n", result_);
}
