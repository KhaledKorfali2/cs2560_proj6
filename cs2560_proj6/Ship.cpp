//
// Name:	Korfali, Khaled
// Project:	6
// Due: 	05-12-2023
// Course:	cs-2560-01-sp23
//
// Description:
//		This program defines a class called "Ship" that stores information about a ship, including
//		its name and the year it was built. The class includes accessor and mutator functions to
//		get and set the ship name and year built, as well as a virtual function to print the ship details.
//		The class also includes overloaded operators to input and output ship objects.
//
//

#include "Ship.h"

// Constructor that initializes the member variables with optional parameters
Ship::Ship(std::string shipName, std::string yearBuilt)
{
	this->shipName = shipName;
	this->yearBuilt = yearBuilt;
}

// Accessor function to get the ship name
std::string Ship::getName() const
{
	return shipName;
}

// Accessor function to get the year built
std::string Ship::getYearBuilt() const
{
	return yearBuilt;
}

// Mutator function to set the ship name
void Ship::setName(std::string shipName)
{
	this->shipName = shipName;
}

// Mutator function to set the year built
void Ship::setYearBuilt(std::string yearBuilt)
{
	this->yearBuilt = yearBuilt;
}

// Virtual function to print the ship details
void Ship::print() const
{
	std::cout << "Ship Name: " << shipName << std::endl
		<< "Year Built: " << yearBuilt << std::endl;
}

// Overloaded operator to output ship objects
std::ostream& operator<<(std::ostream& os, const Ship& ship)
{
	ship.print();
	return os;
}

// Overloaded operator to input ship objects
std::istream& operator>>(std::istream& is, Ship& ship)
{
	std::cout << "Enter ship name: ";
	std::getline(is, ship.shipName);

	std::cout << "Enter year built: ";
	std::getline(is, ship.yearBuilt);

	return is;
}
