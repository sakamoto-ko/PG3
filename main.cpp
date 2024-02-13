#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <string>

#include "MyMath.h"

int main(int argc, const char* argv[]) {
	std::string a = (100000, "a");

	for (auto i = a.begin(); i < a.end(); ++i) {
		printf("%c", a[i]);
	}

	return 0;
}