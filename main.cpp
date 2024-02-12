#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <stdlib.h>
#include <vector>
#include <list>
#include <algorithm>
#include <thread>
using namespace std;

void One() {
	printf("thread1\n");
}

void Two() {
	printf("thread2\n");
}

void Three() {
	printf("thread3\n");
}

int main(int argc, const char* argv[]) {

	thread th1(One);
	th1.join();

	thread th2(Two);
	th2.join();

	thread th3(Three);
	th3.join();

	return 0;
}