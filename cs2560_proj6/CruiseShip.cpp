//
// Name:	Korfali, Khaled
// Project:	6
// Due: 	05-12-2023
// Course:	cs-2560-01-sp23
//
// Description:
//		This program defines a CruiseShip class which is a derived class of the Ship class.
//		It contains information about the maximum number of passengers that can be on board.
//		The class provides methods to set and get the maximum number of passengers, as well as
//		overloaded operators to add passengers to the ship and increment the maximum number
//		of passengers by 1. Additionally, the class provides input and output stream operator
//		overloads for reading from and writing to files or the console.
//


#include "CruiseShip.h"
#include <iostream>

// Constructor that initializes a CruiseShip object with a given name, year built, and maximum number of passengers
CruiseShip::CruiseShip(std::string shipName, std::string yearBuilt, int maxPassengers)
	: Ship(shipName, yearBuilt)
{
	this->maxPassengers = maxPassengers;
}

// Getter method for the maximum number of passengers
int CruiseShip::getMaxPassengers() const
{
	return maxPassengers;
}


// Setter method for the maximum number of passengers
void CruiseShip::setMaxPassengers(int maxPassengers)
{
	this->maxPassengers = maxPassengers;
}


// Overloaded output stream operator to print the CruiseShip object
std::ostream& operator<<(std::ostream& os, const CruiseShip& cruiseShip)
{
	cruiseShip.print();
	return os;
}


// Overloaded input stream operator to read data into the CruiseShip object
std::istream& operator>>(std::istream& is, CruiseShip& cruiseShip)
{
	std::string name;
	std::string yearBuilt;
	int maxPassengers;

	std::cout << "Enter CruiseShip name: ";
	std::getline(is, name);
	cruiseShip.setName(name);

	std::cout << "Enter year built: ";
	std::getline(is, yearBuilt);
	cruiseShip.setYearBuilt(yearBuilt);

	std::cout << "Enter max passengers: ";
	is >> maxPassengers;
	cruiseShip.setMaxPassengers(maxPassengers);

	return is;
}

// Overloaded addition operator to add a specified number of passengers to the CruiseShip object
// CruiseShip + n
CruiseShip& CruiseShip::operator+(int num)
{
	maxPassengers += num;
	return *this;
}

// Overloaded addition operator to add a CruiseShip object and a specified number of passengers
// n + CruiseShip
CruiseShip operator+(int num, CruiseShip& cruiseShip)
{
	return cruiseShip + num;
}

// Overloaded pre-increment operator to increment the maximum number of passengers by 1
// prefix (++CruiseShip)
CruiseShip& CruiseShip::operator++()
{
	++maxPassengers;
	return *this;
}

// Overloaded post-increment operator to increment the maximum number of passengers by 1
// postfix (CruiseShip++)
CruiseShip CruiseShip::operator++(int)
{
	CruiseShip temp(*this);
	++(*this);
	return temp;
}

// Print method to display the CruiseShip object's information
void CruiseShip::print() const
{
	std::cout << "CruiseShip Name: " << getName() << std::endl
		<< "Year Built: " << getYearBuilt() << std::endl
		<< "Max Passangers: " << maxPassengers << std::endl;
}
