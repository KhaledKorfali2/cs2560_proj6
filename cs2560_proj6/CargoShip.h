#pragma once
//
// Name:	Korfali, Khaled
// Project:	6
// Due: 	05-12-2023
// Course:	cs-2560-01-sp23
//
// Description:
//		This program defines a CargoShip class that inherits from the Ship class. The CargoShip
//		class has a cargo capacity attribute that can be modified through mutator methods or
//		overloaded operators. The program also includes overloaded insertion, extraction,
//		addition, and increment operators, as well as an overridden print() method to print
//		additional information.
//

#include "Ship.h"

class CargoShip : public Ship {
private:
	int cargoCap;

public:
	// Constructor that accepts the ship name, year built, and cargo capacity
	CargoShip(std::string shipName = "", std::string yearBuilt = "", int cargoCap = 0);

	// Accessor method for getting the cargo capacity
	int getCargoCapacity() const;

	// Mutator method for setting the cargo capacity
	void setCargoCapacity(int cargoCap);


	// Overloading operators
	
	// Overloaded insertion and extraction operators to allow input/output of a CargoShip object
	friend std::ostream& operator<<(std::ostream& os, const CargoShip& cargoShip);
	friend std::istream& operator>>(std::istream& is, CargoShip& cargoShip);

	// Overloaded addition operator to add an integer to the cargo capacity
	friend CargoShip operator+(int num, CargoShip& cargoShip); // n + CargoShip
	CargoShip& operator+(int num); // CargoShip + n

	// Overloaded increment operators to increment the cargo capacity by 1
	CargoShip& operator++();        // prefix (++CargoShip)
	CargoShip operator++(int);      // postfix (CargoShip++)

	// Overridden print() method to print additional information
	void print() const override;
};
