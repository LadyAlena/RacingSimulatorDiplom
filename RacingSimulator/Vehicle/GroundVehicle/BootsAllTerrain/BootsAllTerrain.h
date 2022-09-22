#pragma once

#include "RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	class BootsAllTerrain : public GroundVehicle {
	public:
		RACINGSIMULATOR_API BootsAllTerrain();

	protected:
		double calculateTimeResult(double distanceValue) override;
	};
}