#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <stdlib.h>
#include <vector>
#include <list>
using namespace std;

int main(int argc, const char* argv[]) {

	list<const char*> lst{
	"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguishudani","Nippori",
	"Tabata","Komagome","Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
	"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanta","Osaki","Shinagawa",
	"Tamachi","Hamamatsucho","Shinbashi","Yurakucho"
	};

	const char* stationName = "Tokyo";

	printf("1970\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		stationName = *itr;
		printf("%s\n", stationName);
	}
	printf("\n");

	printf("2019\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = lst.insert(itr, "Nishi-Nippori");
			stationName = *itr;
			printf("%s\n", stationName);
			++itr;
		}
		stationName = *itr;
		printf("%s\n", stationName);
	}
	printf("\n");

	printf("2022\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = lst.insert(itr, "Takanawa-Gateway");
			stationName = *itr;
			printf("%s\n", stationName);
			++itr;
		}
		stationName = *itr;
		printf("%s\n", stationName);
	}
	printf("\n");

	return 0;
}