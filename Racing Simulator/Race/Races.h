#pragma once

#include "Racing Simulator/Race/Air race/AirRace.h"
#include "Racing Simulator/Race/Ground race/GroundRace.h"
#include "Racing Simulator/Race/Ground and air race/GroundAndAirRace.h"

namespace race_sim {
	struct Races {
		GroundRace gRace;
		AirRace aRace;
		GroundAndAirRace gaRace;
	};
}
