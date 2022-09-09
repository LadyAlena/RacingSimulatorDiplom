#pragma once

#include "RacingSimulator/specialSyntaxDLL.h"

namespace race_sim {
	enum class RACINGSIMULATOR_API TypeOfRace {
		RACE_DEFAULT,
		GROUND_RACE = 0,
		AIR_RACE,
		GROUND_AND_AIR_RACE
	};
}