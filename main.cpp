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
	const char* resultP = "�܂����肵�ĂȂ���";
	int answer = Dice();

	while (prediction != 0 && prediction != 1) {
		printf("�\�z�������Ȃ�΁u0�v���A��Ȃ�΁u1�v����͂��Ă�������\n");
		scanf_s("%d", &prediction);
	}

	SetTimeOut(s);

	//printf("�_�C�X�̖ڂ�%d\n", answer);
	printf("������%d\n", answer % 2);

	if (answer % 2 == prediction) {
		resultP = "�����I";
	}
	else {
		resultP = "�͂���...";
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