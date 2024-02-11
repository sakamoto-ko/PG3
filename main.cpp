#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>

#include "MyMath.h"

int main(int argc, const char* argv[]) {
	MyMath<int> b1(10, 20);
	MyMath<float> b2(10.0f, 20.0f);
	MyMath<double> b3(10.0, 20.0);

	printf("<int> 大きいのは %d\n", b1.Min());
	printf("<float> 大きいのは %f\n", b2.Min());
	printf("<double> 大きいのは %lf\n", b3.Min());
	return 0;
}