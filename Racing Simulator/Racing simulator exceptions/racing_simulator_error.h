#pragma once

#include <stdexcept>

#include "Racing Simulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class racing_simulator_error : public std::domain_error {
	public:

		RACINGSIMULATOR_API racing_simulator_error(const char* msgError);
		RACINGSIMULATOR_API const char* what() const override;

	private:
		const char* msgError;
	};
}