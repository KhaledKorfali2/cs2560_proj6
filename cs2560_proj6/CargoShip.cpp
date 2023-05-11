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


std::ostream& operator<<(std::ostream& os, const CargoShip& c)
{
	c.print();
	return os;
}

std::istream& operator>>(std::istream& is, CargoShip& c)
{
	std::string name;
	std::string yearBuilt;
	int cargoCap;

	std::cout << "Enter CruiseShip name: ";
	std::getline(is, name);
	c.setName(name);

	std::cout << "Enter year built: ";
	std::getline(is, yearBuilt);
	c.setYearBuilt(yearBuilt);

	std::cout << "Enter max cargo capacity in tons: ";
	is >> cargoCap;
	c.setCargoCapacity(cargoCap);

	return is;
}


CargoShip& CargoShip::operator+(int num)
{
	cargoCap += num;
	return *this;
}

CargoShip operator+(int num, CargoShip& c)
{
	return c + num;
}

CargoShip& CargoShip::operator++()
{
	++cargoCap;
	return *this;
}

CargoShip CargoShip::operator++(int)
{
	CargoShip temp(*this);
	++(*this);
	return temp;
}


void CargoShip::print() const
{
	std::cout << "Ship Name: " << getName() << std::endl
		<< "Year Built: " << getYearBuilt() << std::endl
	<< "Cargo Capacity: " << getCargoCapacity() << " tons" << std::endl;
}