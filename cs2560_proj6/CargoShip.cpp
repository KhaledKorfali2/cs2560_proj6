//
// Name:	Korfali, Khaled
// Project:	6
// Due: 	05-12-2023
// Course:	cs-2560-01-sp23
//
// Description:
//		This program defines a CargoShip class, which is a subclass of the Ship class. It
//		contains a cargo capacity field and several overloaded operators for adding to the
//		cargo capacity and incrementing it. It also overrides the print() method of the
//		Ship class to print additional information about the cargo capacity.
//
//

#include "CargoShip.h"
#include<string>

// Constructor that accepts the ship name, year built, and cargo capacity
CargoShip::CargoShip(std::string shipName, std::string yearBuilt, int cargoCap)
	: Ship(shipName, yearBuilt)
{
	this->cargoCap = cargoCap;
}

// Accessor method for getting the cargo capacity
int CargoShip::getCargoCapacity() const
{
	return cargoCap;
}

// Mutator method for setting the cargo capacity
void CargoShip::setCargoCapacity(int cargoCap)
{
	this->cargoCap = cargoCap;
}

// Overloaded output stream operator to print the CargoShip object
std::ostream& operator<<(std::ostream& os, const CargoShip& cargoShip)
{
	cargoShip.print();
	return os;
}

// Overloaded input stream operator to read data into the CargoShip object
std::istream& operator>>(std::istream& is, CargoShip& cargoShip)
{
	std::string name;
	std::string yearBuilt;
	int cargoCap;

	std::cout << "Enter CruiseShip name: ";
	std::getline(is, name);
	cargoShip.setName(name);

	std::cout << "Enter year built: ";
	std::getline(is, yearBuilt);
	cargoShip.setYearBuilt(yearBuilt);

	std::cout << "Enter max cargo capacity in tons: ";
	is >> cargoCap;
	cargoShip.setCargoCapacity(cargoCap);

	return is;
}

// Overloaded addition operator to add a specified number of cargo capacity in tons to the CargoShip object
// CargoShip + n
CargoShip& CargoShip::operator+(int num)
{
	cargoCap += num;
	return *this;
}

// Overloaded addition operator to add a CargoShip object and a specified number of cargo capacity in tons
// n + CargoShip
CargoShip operator+(int num, CargoShip& cargoShip)
{
	return cargoShip + num;
}

// Overloaded pre-increment operator to increment the maximum number of cargo capacity in tons by 1
// prefix (++CargoShip)
CargoShip& CargoShip::operator++()
{
	++cargoCap;
	return *this;
}

// Overloaded post-increment operator to increment the maximum number of cargo capacity in tons by 1
// postfix (CargoShip++)
CargoShip CargoShip::operator++(int)
{
	CargoShip temp(*this);
	++(*this);
	return temp;
}

// Print method to display the CargoShip object's information
void CargoShip::print() const
{
	std::cout << "CargoShip Name: " << getName() << std::endl
		<< "Year Built: " << getYearBuilt() << std::endl
	<< "Cargo Capacity: " << getCargoCapacity() << " tons" << std::endl;
}