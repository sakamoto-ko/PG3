#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>

#include "Circle.h"
#include "Rectangle.h"

int main(int argc, const char* argv[]) {
	Circle* circle = new Circle();
	RectangleShape* rectangle = new RectangleShape();

	circle->Size();
	rectangle->Size();

	circle->Draw();
	rectangle->Draw();

	return 0;
}