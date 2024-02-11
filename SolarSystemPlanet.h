#pragma once
#include <stdio.h>

class SolarSystemPlanet
{
public:
	SolarSystemPlanet();
	~SolarSystemPlanet();

	virtual void PlanetName();

private:
	const char* name = "Earth";
};

