#pragma once
#include "SolarSystemPlanet.h"

class Venus : public SolarSystemPlanet
{
public:
	Venus();
	~Venus();

	void PlanetName() override;

private:
	const char* name = "Venus";
};

