#pragma once

#include "Racing Simulator/Vehicle/Air Vehicle/AirVehicle.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class MagicСarpet : public AirVehicle {
	public:
		RACINGSIMULATOR_API MagicСarpet();

	protected:
		double timeResult(double distanceValue) override;
	};
}