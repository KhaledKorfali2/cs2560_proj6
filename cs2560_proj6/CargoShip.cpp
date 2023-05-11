#include "CargoShip.h"
#include<string>

CargoShip::CargoShip(std::string shipName, std::string yearBuilt, int cargoCap)
	: Ship(shipName, yearBuilt)
{
	this->cargoCap = cargoCap;
}

int CargoShip::getCargoCapacity() const
{
	return cargoCap;
}

void CargoShip::setCargoCapacity(int cargoCap)
{
	this->cargoCap = cargoCap;
}

void CargoShip::print() const
{
	std::cout << "Ship Name: " << getName() << std::endl
		<< "Year Built: " << getYearBuilt() << std::endl
	<< "Cargo Capacity: " << getCargoCapacity() << " tons" << std::endl;
}