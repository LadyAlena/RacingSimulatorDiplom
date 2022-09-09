#pragma once

#ifdef RACINGSIMULATOR_EXPORTS
#define RACINGSIMULATOR_API __declspec(dllexport)
#else
#define RACINGSIMULATOR_API __declspec(dllimport)
#endif