#pragma once

#include <string>
#include <iostream>

class Ship
{
private:
	std::string shipName;
	std::string yearBuilt;

public:
	//Constructor
	Ship(std::string shipName = "", std::string yearBuilt = "");

	//Accessors
	std::string getName() const;
	std::string getYearBuilt() const;

	// Mutators
	void setName(std::string shipName);
	void setYearBuilt(std::string yearBuilt);

	//Virtual Functions
	virtual void print() const;

	// Overloaded operators
	friend std::ostream& operator<<(std::ostream& os, const Ship& ship);
	friend std::istream& operator>>(std::istream& is, Ship& ship);
};
