#pragma once
#include "Ship.h"

class CargoShip : public Ship {
private:
	int cargoCap;

public:
	CargoShip(std::string shipName = "", std::string yearBuilt = "", int cargoCap = 0);

	int getCargoCapacity() const;

	void setCargoCapacity(int cargoCap);

	void print() const override;
};
