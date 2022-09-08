#pragma once

#include "Racing Simulator/Vehicle/Ground Vehicle/BootsAllTerrain/BootsAllTerrain.h"
#include "Racing Simulator/Vehicle/Air Vehicle/Broomstick/Broomstick.h"
#include "Racing Simulator/Vehicle/Ground Vehicle/Camel/Camel.h"
#include "Racing Simulator/Vehicle/Ground Vehicle/Centaur/Centaur.h"
#include "Racing Simulator/Vehicle/Air Vehicle/Eagle/Eagle.h"
#include "Racing Simulator/Vehicle/Ground Vehicle/FastMovingCamel/FastMovingCamel.h"
#include "Racing Simulator/Vehicle/Air Vehicle/MagicCarpet/MagicСarpet.h"

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