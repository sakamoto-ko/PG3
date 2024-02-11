#pragma once
#include "SolarSystemPlanet.h"

class Jupiter : public SolarSystemPlanet
{
public:
	Jupiter();
	~Jupiter();

	void PlanetName() override;

private:
	const char* name = "Jupiter";
};


