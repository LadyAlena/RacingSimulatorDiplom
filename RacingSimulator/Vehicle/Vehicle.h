#pragma once

#include <string>

#include "RacingSimulator/Reception/Reception.h"
#include "RacingSimulator/Race/Race.h"
#include "RacingSimulator/Vehicle/TypeOfVehicle.h"
#include "RacingSimulator/Race/TypeOfRace.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {

	class Vehicle {

		friend bool Reception::registerVehicle(Vehicle* vehicle, const TypeOfRace typeRace);
		friend Vehicle** Reception::generateListOfReg();
		friend Vehicle** Race::start(const double distance, Vehicle** listOfReg, const int countParticipants);

	public:
		RACINGSIMULATOR_API Vehicle();

		RACINGSIMULATOR_API std::string getName();
		RACINGSIMULATOR_API TypeOfVehicle getTypeOfVehicle();

	protected:

		void registrated(const bool reg);
		bool getReg();

		virtual double timeResult(double distanceValue);
		double getResult();


		std::string name;
		TypeOfVehicle type;
		double speed;
		bool reg;
		double result;
	};
}