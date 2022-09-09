#pragma once

#include "RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class FastMovingCamel : public GroundVehicle {
	public:
		RACINGSIMULATOR_API FastMovingCamel();

	protected:
		double timeResult(double distanceValue) override;
	};
}