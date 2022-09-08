#pragma once

#include "Racing Simulator/Vehicle/Vehicle.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class GroundVehicle : public Vehicle {
	public:
		RACINGSIMULATOR_API GroundVehicle();

	protected:
		double timeBeforeRest;
		double timeRest;
	};
}