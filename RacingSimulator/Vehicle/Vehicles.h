#pragma once

#include "RacingSimulator/Vehicle/GroundVehicle/BootsAllTerrain/BootsAllTerrain.h"
#include "RacingSimulator/Vehicle/AirVehicle/Broomstick/Broomstick.h"
#include "RacingSimulator/Vehicle/GroundVehicle/Camel/Camel.h"
#include "RacingSimulator/Vehicle/GroundVehicle/Centaur/Centaur.h"
#include "RacingSimulator/Vehicle/AirVehicle/Eagle/Eagle.h"
#include "RacingSimulator/Vehicle/GroundVehicle/FastMovingCamel/FastMovingCamel.h"
#include "RacingSimulator/Vehicle/AirVehicle/MagicCarpet/MagicСarpet.h"

namespace race_sim {
	struct Vehicles {
		BootsAllTerrain boots;
		Broomstick broom;
		Camel camel;
		Centaur centaur;
		Eagle eagle;
		FastMovingCamel fastCamel;
		MagicСarpet carpet;
	};
}