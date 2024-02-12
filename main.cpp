#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>

#include "MyMath.h"

int main(int argc, const char* argv[]) {
	MyMath<int, int> b1(10, 20);
	MyMath<float, float> b2(10.0f, 20.0f);
	MyMath<double, double> b3(10.0, 20.0);
	MyMath<int, float> b4(10, 20.0f);
	MyMath<int, double > b5(10, 20.0);
	MyMath<float, double> b6(10.0f, 20.0);

	printf("<int, int> 大きいのは %d\n", b1.Min());
	printf("<float, float> 大きいのは %f\n", b2.Min());
	printf("<double, double> 大きいのは %lf\n", b3.Min());
	printf("<int, float> 大きいのは %d\n", b4.Min());
	printf("<int, double> 大きいのは %d\n", b5.Min());
	printf("<float, double> 大きいのは %f\n", b6.Min());
	return 0;
}