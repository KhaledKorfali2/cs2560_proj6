#include "Ship.h"

Ship::Ship(std::string shipName, std::string yearBuilt)
{
	this->shipName = shipName;
	this->yearBuilt = yearBuilt;
}


std::string Ship::getName() const
{
	return shipName;
}

void Ship::setName(std::string shipName)
{
	this->shipName = shipName;
}

std::string Ship::getYearBuilt() const
{
	return yearBuilt;
}

void Ship::setYearBuilt(std::string yearBuilt)
{
	this->yearBuilt = yearBuilt;
}

void Ship::print() const
{
	std::cout << "Ship Name: " << shipName << std::endl
		<< "Year Built: " << yearBuilt << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Ship& ship)
{
	ship.print();
	return os;
}

std::istream& operator>>(std::istream& is, Ship& ship)
{
	std::cout << "Enter ship name: ";
	std::getline(is, ship.shipName);

	std::cout << "Enter year built: ";
	std::getline(is, ship.yearBuilt);

	return is;
}
