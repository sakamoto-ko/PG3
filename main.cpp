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

	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Nippori") {
			itr = lst.insert("Nishi-Nippori", "Nippori");
			++itr;
		}
	}

	return 0;
}