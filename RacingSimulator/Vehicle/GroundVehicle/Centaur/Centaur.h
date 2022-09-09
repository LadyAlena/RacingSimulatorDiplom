#pragma once

#include "RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	class Centaur : public GroundVehicle {
	public:
		RACINGSIMULATOR_API Centaur();

	protected:
		double timeResult(double distanceValue) override;
	};
}