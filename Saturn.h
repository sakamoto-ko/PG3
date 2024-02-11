#pragma once
#include "SolarSystemPlanet.h"

class Saturn : public SolarSystemPlanet
{
public:
	Saturn();
	~Saturn();

	void PlanetName() override;

private:
	const char* name = "Saturn";
};


