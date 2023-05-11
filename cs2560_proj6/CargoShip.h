#pragma once
#include "Ship.h"

class CargoShip : public Ship {
private:
	int cargoCap;

public:
	// Constructor
	CargoShip(std::string shipName = "", std::string yearBuilt = "", int cargoCap = 0);

	//Accessors
	int getCargoCapacity() const;

	//Mutators
	void setCargoCapacity(int cargoCap);


	// Overloading operators
	friend std::ostream& operator<<(std::ostream& os, const CargoShip& c);
	friend std::istream& operator>>(std::istream& is, CargoShip& c);
	friend CargoShip operator+(int num, CargoShip& c);
	CargoShip& operator+(int num);
	CargoShip& operator++();        // prefix
	CargoShip operator++(int);      // postfix

	//Overidden print
	void print() const override;
};
