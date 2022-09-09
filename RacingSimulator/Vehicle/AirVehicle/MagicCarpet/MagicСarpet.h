#pragma once

#include "RacingSimulator/Vehicle/AirVehicle/AirVehicle.h"

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	class MagicСarpet : public AirVehicle {
	public:
		RACINGSIMULATOR_API MagicСarpet();

	protected:
		double timeResult(double distanceValue) override;
	};
}