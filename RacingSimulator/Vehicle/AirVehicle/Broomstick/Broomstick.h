#pragma once

#include "RacingSimulator/Vehicle/AirVehicle/AirVehicle.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class Broomstick : public AirVehicle {
	public:
		RACINGSIMULATOR_API Broomstick();

	protected:
		double timeResult(double distanceValue) override;
	};
}