#pragma once
//
// Name:	Korfali, Khaled
// Project:	6
// Due: 	05-12-2023
// Course:	cs-2560-01-sp23
//
// Description:
//		This program defines a class called "Ship" that represents a ship.The class contains
//		private member variables to store the name and year the ship was built, as well as
//		public member functions to accessand modify these variables.The class also contains
//		a virtual function to print the ship detailsand overloaded operators to inputand
//		output ship objects. All mutator and accessor functions are inilne.
//
//


#include <string>
#include <iostream>

class Ship
{
private:
	// member variables to store the name and year the ship was built
	std::string shipName;
	std::string yearBuilt;

public:
	// Constructor that initializes the member variables with optional parameters
	Ship(std::string shipName = "", std::string yearBuilt = "");

	// Inline Accessor functions to get the ship name and year built
	inline std::string getName() const { return shipName; };
	inline std::string getYearBuilt() const { return yearBuilt; }

	// Inline Mutator functions to set the ship name and year built
	inline void setName(std::string shipName) { this->shipName = shipName; } ;
	inline void setYearBuilt(std::string yearBuilt) { this->yearBuilt = yearBuilt; };

	// Virtual function to print the ship details
	virtual void print() const;

	// Overloaded operators to input and output ship objects
	friend std::ostream& operator<<(std::ostream& os, const Ship& ship);
	friend std::istream& operator>>(std::istream& is, Ship& ship);
};
