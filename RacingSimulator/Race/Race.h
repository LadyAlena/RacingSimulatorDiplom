#pragma once

#include <string>

#include "RacingSimulator/Race/TypeOfRace.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {

	class Vehicle;

	class Race {
	public:
		RACINGSIMULATOR_API Race();

		RACINGSIMULATOR_API std::string getName();
		RACINGSIMULATOR_API TypeOfRace getTypeOfRace();

		RACINGSIMULATOR_API Vehicle** start(const double distance, Vehicle** listOfReg, const int countParticipants);

	protected:

		std::string nameRace;
		TypeOfRace typeRace;

		double distance;
		Vehicle** listOfReg;
		int countParticipants;
	};
}