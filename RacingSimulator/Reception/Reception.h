#pragma once
#include "RacingSimulator/Race/TypeOfRace.h"

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {

	class Vehicle;

	class Reception {
	public:
		RACINGSIMULATOR_API Reception(Vehicle** vehicle, const int countVehicle);
		RACINGSIMULATOR_API ~Reception();

		RACINGSIMULATOR_API bool registerVehicle(Vehicle* vehicle, const TypeOfRace typeRacing);
		RACINGSIMULATOR_API Vehicle** generateListOfReg();
		RACINGSIMULATOR_API int getCountReg();

	private:
		Vehicle** vehicle;
		int countVehicle;

		int countReg;
		Vehicle** listOfReg;
	};
}