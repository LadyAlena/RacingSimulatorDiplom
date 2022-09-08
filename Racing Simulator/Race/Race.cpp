﻿#include "Racing Simulator/Race/Race.h"

#include <iostream>

#include "Racing Simulator/Vehicle/Vehicle.h"
#include "Racing Simulator/Racing simulator exceptions/racing_simulator_error.h"

namespace race_sim {
	Race::Race() {
		nameRace = "Гонка";
		typeRace = TypeOfRace::RACE_DEFAULT;
		distance = 0;
		listOfReg = NULL;
		countParticipants = 0;
	}

	std::string Race::getName() { return nameRace; }
	TypeOfRace Race::getTypeOfRace() { return typeRace; }

	Vehicle** Race::start(const double distance, Vehicle** listOfReg, const int countParticipants) {

		if (!distance) {
			throw racing_simulator_error("Дистанция гонки не определена!");
		}
		if (!listOfReg) {
			throw racing_simulator_error("Нет списка зарегестрированных транспортных средств!");
		}
		if (!countParticipants) {
			throw racing_simulator_error("Количество участников не определено!");
		}

		this->distance = distance;
		this->listOfReg = listOfReg;
		this->countParticipants = countParticipants;

		bool swapped = false;
		Vehicle* temp;

		do {
			swapped = false;
			for (int i = 1; i < countParticipants; i++) {
				if (listOfReg[i - 1]->timeResult(distance) > listOfReg[i]->timeResult(distance)) {
					temp = listOfReg[i - 1];
					listOfReg[i - 1] = listOfReg[i];
					listOfReg[i] = temp;
					swapped = true;
				}
			}
		} while (swapped);

		/* Результаты гонки */
		std::cout << "Результаты гонки: " << std::endl;

		for (int i = 0; i < countParticipants; ++i) {
			std::cout << (i + 1) << ". " << listOfReg[i]->getName() << ". Время: " << listOfReg[i]->getResult() << std::endl;
		}

		return listOfReg;
	}
}