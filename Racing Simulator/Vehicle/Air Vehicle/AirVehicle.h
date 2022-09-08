#pragma once

#include "Racing Simulator/Vehicle/Vehicle.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class AirVehicle : public Vehicle {
	public:
		RACINGSIMULATOR_API AirVehicle();

	protected:
		unsigned int coefficientDistanceReduction;
	};
}