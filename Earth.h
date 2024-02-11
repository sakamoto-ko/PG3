#pragma once
#include "SolarSystemPlanet.h"

class Earth : public SolarSystemPlanet 
{
public:
	Earth();
	~Earth();

	void PlanetName() override;

private:
	const char* name = "Earth";
};

