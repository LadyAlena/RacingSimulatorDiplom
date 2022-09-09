#pragma once

#include "RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class BootsAllTerrain : public GroundVehicle {
	public:
		RACINGSIMULATOR_API BootsAllTerrain();

	protected:
		double timeResult(double distanceValue) override;
	};
}