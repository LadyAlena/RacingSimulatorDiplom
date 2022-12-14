#include <iostream>
#include <string>

/* Библиотека Racing Simulator */

#include "RacingSimulator/RacingSimulatorExceptions/racing_simulator_error.h"
#include "RacingSimulator/RacingSimulatorExceptions/menu_operation_error.h"

#include "RacingSimulator/Vehicle/TypeOfVehicle.h"
#include "RacingSimulator/Race/TypeOfRace.h"

#include "RacingSimulator/Vehicle/Vehicle.h"

#include "RacingSimulator/Vehicle/AirVehicle/AirVehicle.h"
#include "RacingSimulator/Vehicle/AirVehicle/Broomstick/Broomstick.h"
#include "RacingSimulator/Vehicle/AirVehicle/Eagle/Eagle.h"
#include "RacingSimulator/Vehicle/AirVehicle/MagicCarpet/MagicСarpet.h"

#include "RacingSimulator/Vehicle/GroundVehicle/GroundVehicle.h"
#include "RacingSimulator/Vehicle/GroundVehicle/BootsAllTerrain/BootsAllTerrain.h"
#include "RacingSimulator/Vehicle/GroundVehicle/Camel/Camel.h"
#include "RacingSimulator/Vehicle/GroundVehicle/Centaur/Centaur.h"
#include "RacingSimulator/Vehicle/GroundVehicle/FastMovingCamel/FastMovingCamel.h"

#include "RacingSimulator/Race/Race.h"
#include "RacingSimulator/Race/AirRace/AirRace.h"
#include "RacingSimulator/Race/GroundAndAirRace/GroundAndAirRace.h"
#include "RacingSimulator/Race/GroundRace/GroundRace.h"

#include "RacingSimulator/Reception/Reception.h"

#include "RacingSimulator/Vehicle/Vehicles.h"
#include "RacingSimulator/Race/Races.h"

/* Библиотека Convert Data */

#include "ConvertData/ConvertData.h"


int main(int argc, char** argv) {

#ifdef _WIN32
	system("chcp 65001");
	system("Cls");
#endif

	bool swh = true;

	realiz_convert_data::ConvertData convertData;

	do {
		race_sim::TypeOfRace type = race_sim::TypeOfRace::RACE_DEFAULT;
		double distance = 0;

		std::string userInputString;
		int answerUser = 0;

		race_sim::Vehicles vehicle;

		race_sim::Vehicle* _Vehicle[] {
			&vehicle.boots,
			&vehicle.broom,
			&vehicle.camel,
			&vehicle.centaur,
			&vehicle.eagle,
			&vehicle.fastCamel,
			&vehicle.carpet
		};

		race_sim::Vehicle* order_Vehicle[] {
			&vehicle.boots,
			&vehicle.broom,
			&vehicle.camel,
			&vehicle.centaur,
			&vehicle.eagle,
			&vehicle.fastCamel,
			&vehicle.carpet
		};

		int countVehicle = sizeof(_Vehicle) / sizeof(race_sim::Vehicle*);

		race_sim::Reception reception(_Vehicle, countVehicle);

		int countReg = reception.getCountReg();

		race_sim::Races race;

		race_sim::Race* _Race[] {
			&race.gRace,
			&race.aRace,
			&race.gaRace
		};

		int countRace = sizeof(_Race) / sizeof(race_sim::Race*);

		/* Выбор типа гонки */

		do {

			std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
			for (int i = 0; i < countRace; ++i) {
				std::cout << (i + 1) << ". " << _Race[i]->getName() << std::endl;
			}

			std::cout << "Выберите тип гонки: ";

			std::getline(std::cin, userInputString);

			system("Cls");

			try {
				answerUser = convertData.StringToInt(userInputString);

				if (answerUser > countRace || answerUser <= 0) {
					throw race_sim::menu_operation_error("Введен некорректный номер! Повторите попытку");
				}

				break;
			}
			catch (race_sim::menu_operation_error& ex) { std::cout << ex.what() << std::endl; }
			catch (std::invalid_argument) { std::cout << "Некорректный ввод! Повторите попытку" << std::endl; }
			catch (std::out_of_range) { std::cout << "Введено слишком большое число! Повторите попытку" << std::endl; }
			catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
			catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }

		} while (true);


		type = _Race[answerUser - 1]->getTypeOfRace();

		int codeRace = static_cast<int>(type);

		/* Выбор дистанции */

		do {
			std::cout << "Укажите длину дистанции (должна быть положительна): ";

			std::getline(std::cin, userInputString);

			system("Cls");

			try {
				distance = convertData.StringToDouble(userInputString);

				if (distance <= 0) {
					throw race_sim::racing_simulator_error("Длина дистанции должна быть положительна! Повторите попытку");
				}

				break;
			}
			catch (race_sim::racing_simulator_error& ex) { std::cout << ex.what() << std::endl; }
			catch (std::invalid_argument) { std::cout << "Некорректный ввод! Повторите попытку" << std::endl; }
			catch (std::out_of_range) { std::cout << "Введено слишком большое число! Повторите попытку" << std::endl; }
			catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
			catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }

		} while (true);

		/* Регистрация транспорта */
		do {

			do {
				std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
				std::cout << "1. Зарегистрировать транспорт" << std::endl;
				std::cout << "Выберите действие: ";

				std::getline(std::cin, userInputString);

				system("Cls");

				try {
					answerUser = convertData.StringToInt(userInputString);

					if (answerUser != 1) {
						throw race_sim::menu_operation_error("Введен некорректный номер! Повторите попытку");
					}

					break;
				}
				catch (race_sim::menu_operation_error& ex) { std::cout << ex.what() << std::endl; }
				catch (std::invalid_argument) { std::cout << "Некорректный ввод! Повторите попытку" << std::endl; }
				catch (std::out_of_range) { std::cout << "Введено слишком большое число! Повторите попытку" << std::endl; }
				catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
				catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }

			} while (true);

			do {
				do {
					std::cout << _Race[codeRace]->getName() << ". Расстояние: " << distance << std::endl;

					if (static_cast<bool>(countReg)) {
						std::cout << "Зарегистрированные транспортные средства: ";

						for (int i = 0; i < countReg; ++i) {
							std::cout << order_Vehicle[i]->getName() << (i < countReg - 1 ? ", " : "\n");
						}
					}

					for (int i = 0; i < countVehicle; ++i) {
						std::cout << (i + 1) << ". " << _Vehicle[i]->getName() << std::endl;
					}

					std::cout << "0. Закончить регистрацию" << std::endl;
					std::cout << "Выберите транспорт или 0 для окончания регистрации: ";

					std::getline(std::cin, userInputString);

					system("Cls");

					try {
						answerUser = convertData.StringToInt(userInputString);

						if (answerUser > countVehicle || answerUser < 0) {
							throw race_sim::menu_operation_error("Введен некорректный номер! Повторите попытку");
						}

						break;
					}
					catch (race_sim::menu_operation_error& ex) { std::cout << ex.what() << std::endl; }
					catch (std::invalid_argument) { std::cout << "Некорректный ввод! Повторите попытку" << std::endl; }
					catch (std::out_of_range) { std::cout << "Введено слишком большое число! Повторите попытку" << std::endl; }
					catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
					catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }

				} while (true);

				if (answerUser) {

					int codeVehicle = answerUser - 1;

					try {
						if (reception.registerVehicle(_Vehicle[codeVehicle], type)) {
							order_Vehicle[countReg] = _Vehicle[codeVehicle];
							countReg = reception.getCountReg();
						};
					}
					catch (race_sim::racing_simulator_error& ex) { std::cout << ex.what() << std::endl; }
					catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
					catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }
				}
				else if (countReg < 2) {
					break;
				}
				else {
					do {
						std::cout << "1. Зарегистрировать транспорт" << std::endl;
						std::cout << "2. Начать гонку" << std::endl;

						std::cout << "Выберите действие: ";

						std::getline(std::cin, userInputString);

						system("Cls");

						try {
							answerUser = convertData.StringToInt(userInputString);

							if (!(answerUser == 1 || answerUser == 2)) {
								throw race_sim::menu_operation_error("Введен некорректный номер! Повторите попытку");
							}

							break;
						}
						catch (race_sim::menu_operation_error& ex) { std::cout << ex.what() << std::endl; }
						catch (std::invalid_argument) { std::cout << "Некорректный ввод! Повторите попытку" << std::endl; }
						catch (std::out_of_range) { std::cout << "Введено слишком большое число! Повторите попытку" << std::endl; }
						catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
						catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }

					} while (swh);

					switch (answerUser)
					{
					case 1:
						swh = true; // продолжить регистрировать транспорт
						break;
					case 2:
						swh = false; // начать гонку
						break;
					}

				}
			} while (swh);

		} while (swh);

		/* Гонка */

		try {

			race_sim::Vehicle** listOfReg = reception.generateListOfReg(); // формирование списка зарегестрированных ТС

			_Race[codeRace]->start(distance, listOfReg, countReg);
		}
		catch (race_sim::racing_simulator_error& ex) { std::cout << ex.what() << std::endl;}
		catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
		catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }

		std::cout << std::endl;

		do {
			std::cout << "1. Провести еще одну гонку" << std::endl;
			std::cout << "2. Выйти" << std::endl;

			std::cout << "Выберите действие: ";

			std::getline(std::cin, userInputString);

			system("Cls");

			try {
				answerUser = convertData.StringToInt(userInputString);

				if (!(answerUser == 1 || answerUser == 2)) {
					throw race_sim::menu_operation_error("Введен некорректный номер! Повторите попытку");
				}

				break;
			}
			catch (race_sim::menu_operation_error& ex) { std::cout << ex.what() << std::endl; }
			catch (std::invalid_argument) { std::cout << "Некорректный ввод! Повторите попытку" << std::endl; }
			catch (std::out_of_range) { std::cout << "Введено слишком большое число! Повторите попытку" << std::endl; }
			catch (std::exception& ex) { std::cout << ex.what() << std::endl; }
			catch (...) { std::cout << "Произошла неизвестная ошибка! Повторите попытку" << std::endl; }

		} while (true);

		switch (answerUser)
		{
		case 1:
			swh = true; // начать новую гонку
			break;
		case 2:
			swh = false; // выход из гоночного симулятора
			break;
		}

	} while (swh);

	return 0;
}