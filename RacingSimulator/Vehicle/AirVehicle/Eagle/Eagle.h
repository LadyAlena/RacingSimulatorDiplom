#pragma once

#include "RacingSimulator/Vehicle/AirVehicle/AirVehicle.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class Eagle : public AirVehicle {
	public:
		RACINGSIMULATOR_API Eagle();

	protected:
		double timeResult(double distanceValue) override;
	};
}