#pragma once

#include "RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	class Camel : public GroundVehicle {
	public:
		RACINGSIMULATOR_API Camel();

	protected:
		double calculateTimeResult(double distanceValue) override;
	};
}