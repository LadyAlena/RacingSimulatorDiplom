#pragma once

#include <string>

#include "Racing Simulator/Race/TypeOfRace.h"

#include "Racing Simulator/another/specialSyntaxDLL.h"

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