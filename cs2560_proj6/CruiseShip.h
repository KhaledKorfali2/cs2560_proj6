#pragma once
//
// Name:	Korfali, Khaled
// Project:	6
// Due: 	05-12-2023
// Course:	cs-2560-01-sp23
//
// Description:
//		This program defines a class CruiseShip that is derived from the Ship class.
//		The CruiseShip class adds a member variable for maximum passengers, and
//		has methods to access and modify that variable. It also overloads operators
//		for I/O, addition, and increment. Finally, it overrides the print() method
//		inherited from the Ship class to print additional information.
//
//


#include "Ship.h"

class CruiseShip : public Ship
{
private:
	int maxPassengers;
public:
	//Constructor that initializes the member variables with optional parameters
	CruiseShip(std::string shipName = "", std::string yearBuilt = "", int maxPassengers = 0);

	//Accessor function to get the maximum passengers
	int getMaxPassengers() const;

	//Mutator function to set the maximum passengers
	void setMaxPassengers(int maxPassengers);

	// Overloading operators

	// Overloaded insertion and extraction operators to allow input/output of a CruiseShip object
	friend std::ostream& operator<<(std::ostream& os, const CruiseShip& cruiseShip);
	friend std::istream& operator>>(std::istream& is, CruiseShip& cruiseShip);

	// Overloaded addition operator to add an integer to the passanger capacity
	friend CruiseShip operator+(int num, const CruiseShip& cruiseShip); // n + CruiseShip
	CruiseShip& operator+(int num);// CruiseShip + n

	// Overloaded increment operators to increment the cargo passanger by 1
	CruiseShip& operator++();        // prefix (++CruiseShip)
	CruiseShip operator++(int);      // postfix (CruiseShip++)

	// Overridden print() method to print additional information
	void print() const override;
};

