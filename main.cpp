#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>

//typedef void (*pFunc)(int*, int);

int Dice() {
	int answer = rand() % 6 + 1;
	return answer;
}

void SetTimeOut(int second) {
	Sleep(second * 1000);
}

void DispResult(int s) {
	int prediction = 5;
	const char* resultP = "まだ判定してないよ";
	int answer = Dice();

	while (prediction != 0 && prediction != 1) {
		printf("予想が偶数ならば「0」を、奇数ならば「1」を入力してください\n");
		scanf_s("%d", &prediction);
	}

	SetTimeOut(s);

	//printf("ダイスの目は%d\n", answer);
	printf("答えは%d\n", answer % 2);

	if (answer % 2 == prediction) {
		resultP = "正解！";
	}
	else {
		resultP = "はずれ...";
	}
	printf("%s\n", resultP);
}

int main(int argc, const char* argv[]) {
	srand(unsigned int(time(nullptr)));

	int waitTime = 3;
	std::function<void()>result = [=]() { DispResult(waitTime); };

	result();

	return 0;
}