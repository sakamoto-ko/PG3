#pragma once
#include "SolarSystemPlanet.h"

class Mars : public SolarSystemPlanet
{
public:
	Mars();
	~Mars();

	void PlanetName() override;

private:
	const char* name = "Mars";
};


