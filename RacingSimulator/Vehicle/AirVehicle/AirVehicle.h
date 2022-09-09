#pragma once

#include "RacingSimulator/Vehicle/Vehicle.h"

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	class AirVehicle : public Vehicle {
	public:
		RACINGSIMULATOR_API AirVehicle();

	protected:
		unsigned int coefficientDistanceReduction;
	};
}