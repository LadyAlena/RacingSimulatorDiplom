#pragma once

#include <stdexcept>

#include "RacingSimulator/another/specialSyntaxDLL.h"

namespace race_sim {
	class menu_operation_error : public std::out_of_range {
	public:

		RACINGSIMULATOR_API menu_operation_error(const char* msgError);
		RACINGSIMULATOR_API const char* what() const override;

	private:
		const char* msgError;
	};
}