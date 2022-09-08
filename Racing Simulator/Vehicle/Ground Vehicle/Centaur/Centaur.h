#pragma once

#include "Racing Simulator/Vehicle/Ground Vehicle/GroundVehicle.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class Centaur : public GroundVehicle {
	public:
		RACINGSIMULATOR_API Centaur();

	protected:
		double timeResult(double distanceValue) override;
	};
}