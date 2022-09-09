#pragma once

#include "RacingSimulator/Vehicle/Vehicle.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class GroundVehicle : public Vehicle {
	public:
		RACINGSIMULATOR_API GroundVehicle();

	protected:
		double timeBeforeRest;
		double timeRest;
	};
}