#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>

#include "Mercury.h"
#include "Earth.h"
#include "Jupiter.h"
#include "Mars.h"
#include "Saturn.h"
#include "Venus.h"

int main(int argc, const char* argv[]) {
	SolarSystemPlanet* planet[6];
	const int kMaxPlanet = 6;

	for (int i = 0; i < kMaxPlanet; ++i) {
		if (i == 0) {
			planet[i] = new Mercury;
		}
		else if (i == 1) {
			planet[i] = new Venus;
		}
		else if (i == 2) {
			planet[i] = new Earth;
		}
		else if (i == 3) {
			planet[i] = new Mars;
		}
		else if (i == 4) {
			planet[i] = new Jupiter;
		}
		else if (i == 5) {
			planet[i] = new Saturn;
		}
		else {
			planet[i] = new Earth;
		}
	}

	for (int i = 0; i < kMaxPlanet; ++i) {
		planet[i]->PlanetName();
	}

	for (int i = 0; i < kMaxPlanet; ++i) {
		delete planet[i];
	}

	return 0;
}