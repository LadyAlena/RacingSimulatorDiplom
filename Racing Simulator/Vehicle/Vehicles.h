#pragma once

#include "Ground Vehicle/BootsAllTerrain/BootsAllTerrain.h"
#include "Air Vehicle/Broomstick/Broomstick.h"
#include "Ground Vehicle/Camel/Camel.h"
#include "Ground Vehicle/Centaur/Centaur.h"
#include "Air Vehicle/Eagle/Eagle.h"
#include "Ground Vehicle/FastMovingCamel/FastMovingCamel.h"
#include "Air Vehicle/MagicCarpet/MagicСarpet.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

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