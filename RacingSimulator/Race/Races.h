#pragma once

#include "RacingSimulator/Race/AirRace/AirRace.h"
#include "RacingSimulator/Race/GroundRace/GroundRace.h"
#include "RacingSimulator/Race/GroundAndAirRace/GroundAndAirRace.h"

namespace race_sim {
	struct Races {
		GroundRace gRace;
		AirRace aRace;
		GroundAndAirRace gaRace;
	};
}
