#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <string>
#include <chrono>
#include <utility>

using namespace std;

//#include "MyMath.h"

int main() {
	std::string a(100000, 'a');

	printf("100,000�������ړ��ƃR�s�[�Ŕ�r���܂����B\n");

	std::chrono::system_clock::time_point  start1, end1; 
	start1 = std::chrono::system_clock::now(); // �v���J�n����

	std::string b = a;

	end1 = std::chrono::system_clock::now();  // �v���I������
	double elapsed1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count(); //�����ɗv�������Ԃ��~���b�ɕϊ�

	std::chrono::system_clock::time_point  start2, end2; 
	start2 = std::chrono::system_clock::now(); // �v���J�n����

	std::string c = std::move(a);

	end2 = std::chrono::system_clock::now();  // �v���I������
	double elapsed2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count(); //�����ɗv�������Ԃ��~���b�ɕϊ�

	printf("�R�s�[: %lf��s\n", elapsed1);
	printf("�ړ�: %lf��s\n", elapsed1);

	return 0;
}