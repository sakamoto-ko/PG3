#pragma once
#include "SolarSystemPlanet.h"

class Mercury : public SolarSystemPlanet
{
public:
	Mercury();
	~Mercury();

	void PlanetName() override;

private:
	const char* name = "Mercury";
};

