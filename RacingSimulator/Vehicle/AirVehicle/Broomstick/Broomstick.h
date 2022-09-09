#pragma once

#include "RacingSimulator/Vehicle/AirVehicle/AirVehicle.h"

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	class Broomstick : public AirVehicle {
	public:
		RACINGSIMULATOR_API Broomstick();

	protected:
		double timeResult(double distanceValue) override;
	};
}