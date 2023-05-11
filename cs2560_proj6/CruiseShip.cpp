#include "CruiseShip.h"
#include <iostream>


CruiseShip::CruiseShip(std::string shipName, std::string yearBuilt, int maxPassengers)
	: Ship(shipName, yearBuilt)
{
	this->maxPassengers = maxPassengers;
}

int CruiseShip::getMaxPassengers() const
{
	return maxPassengers;
}

void CruiseShip::setMaxPassengers(int maxPassengers)
{
	this->maxPassengers = maxPassengers;
}

std::ostream& operator<<(std::ostream& os, const CruiseShip& c)
{
	c.print();
	return os;
}

std::istream& operator>>(std::istream& is, CruiseShip& c)
{
	std::string name;
	std::string yearBuilt;
	int maxPassengers;

	std::cout << "Enter CruiseShip name: ";
	std::getline(is, name);
	c.setName(name);

	std::cout << "Enter year built: ";
	std::getline(is, yearBuilt);
	c.setYearBuilt(yearBuilt);

	std::cout << "Enter max passengers: ";
	is >> maxPassengers;
	c.setMaxPassengers(maxPassengers);

	return is;
}


CruiseShip& CruiseShip::operator+(int num)
{
	maxPassengers += num;
	return *this;
}

CruiseShip operator+(int num, CruiseShip& c)
{
	return c + num;
}

CruiseShip& CruiseShip::operator++()
{
	++maxPassengers;
	return *this;
}

CruiseShip CruiseShip::operator++(int)
{
	CruiseShip temp(*this);
	++(*this);
	return temp;
}

void CruiseShip::print() const
{
	std::cout << "Ship Name: " << getName() << std::endl
		<< "Year Built: " << getYearBuilt() << std::endl
		<< "Max Passangers: " << maxPassengers << std::endl;
}
