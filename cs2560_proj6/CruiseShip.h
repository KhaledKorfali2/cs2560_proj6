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
//		All mutator and accessor functions are inilne.
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

	//Inline Accessor function to get the maximum passengers
	inline int getMaxPassengers() const { return maxPassengers; };

	//Inline Mutator function to set the maximum passengers
	inline void setMaxPassengers(int maxPassengers) { this->maxPassengers = maxPassengers; };

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

