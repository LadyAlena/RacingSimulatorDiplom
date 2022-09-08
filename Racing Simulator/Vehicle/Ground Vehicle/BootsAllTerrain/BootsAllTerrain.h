#pragma once

#include "Racing Simulator/Vehicle/Ground Vehicle/GroundVehicle.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class BootsAllTerrain : public GroundVehicle {
	public:
		RACINGSIMULATOR_API BootsAllTerrain();

	protected:
		double timeResult(double distanceValue) override;
	};
}