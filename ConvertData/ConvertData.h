#pragma once

#include <string>

#ifdef CONVERTDATA_EXPORTS
#define CONVERTDATA_API __declspec(dllexport)
#else
#define CONVERTDATA_API __declspec(dllimport)
#endif

namespace realiz_convert_data {
	class ConvertData
	{
	public:
		CONVERTDATA_API int StringToInt(const std::string enterStr);
		CONVERTDATA_API double StringToDouble(const std::string enterStr);
	};
}