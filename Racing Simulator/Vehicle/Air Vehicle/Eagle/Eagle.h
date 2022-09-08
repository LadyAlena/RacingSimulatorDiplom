#pragma once

#include "Racing Simulator/Vehicle/Air Vehicle/AirVehicle.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class Eagle : public AirVehicle {
	public:
		RACINGSIMULATOR_API Eagle();

	protected:
		double timeResult(double distanceValue) override;
	};
}