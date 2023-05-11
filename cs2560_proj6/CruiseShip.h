#pragma once

#include "Ship.h"

class CruiseShip : public Ship
{
private:
	int maxPassengers;
public:
	CruiseShip(std::string shipName = "", std::string yearBuilt = "", int maxPassengers = 0);

	int getMaxPassengers() const;
	void setMaxPassengers(int maxPassengers);

	// Overloading operators
	friend std::ostream& operator<<(std::ostream& os, const CruiseShip& c);
	friend std::istream& operator>>(std::istream& is, CruiseShip& c);
	friend CruiseShip operator+(int num, CruiseShip& c);
	CruiseShip& operator+(int num);
	CruiseShip& operator++();        // prefix
	CruiseShip operator++(int);      // postfix

	void print() const override;
};

