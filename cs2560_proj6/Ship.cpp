#include "Ship.h"

Ship::Ship()
{
    name = "";
    yearBuilt = "";
}

Ship::Ship(std::string n, std::string y)
{
    name = n;
    yearBuilt = y;
}

Ship::~Ship()
{
}

std::string Ship::getName() const
{
    return name;
}

void Ship::setName(std::string n)
{
    name = n;
}

std::string Ship::getYearBuilt() const
{
    return yearBuilt;
}

void Ship::setYearBuilt(std::string y)
{
    yearBuilt = y;
}

void Ship::print() const
{
    std::cout << "Ship: " << name << ", year built: " << yearBuilt << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Ship& ship)
{
    os << "Ship: " << ship.name << ", year built: " << ship.yearBuilt;
    return os;
}

std::istream& operator>>(std::istream& is, Ship& ship)
{
    std::cout << "Enter ship name: ";
    std::getline(is, ship.name);

    std::cout << "Enter year built: ";
    std::getline(is, ship.yearBuilt);

    return is;
}
