#pragma once

#include "RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	class FastMovingCamel : public GroundVehicle {
	public:
		RACINGSIMULATOR_API FastMovingCamel();

	protected:
		double calculateTimeResult(double distanceValue) override;
	};
}