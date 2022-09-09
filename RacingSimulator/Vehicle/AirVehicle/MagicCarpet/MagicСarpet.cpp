#include "MagicСarpet.h"

namespace race_sim {
	MagicСarpet::MagicСarpet() {
		name = "Ковер-самолет";
		speed = 10;
	}

	double MagicСarpet::timeResult(double distanceValue) {

		if (distanceValue < 1000) { coefficientDistanceReduction = 0; }
		else if (distanceValue < 5000) { coefficientDistanceReduction = 3; }
		else if (distanceValue < 10000) { coefficientDistanceReduction = 10; }
		else { coefficientDistanceReduction = 5; }

		distanceValue *= (1 - coefficientDistanceReduction / 100.);

		result = distanceValue / speed;

		return result;
	}
}