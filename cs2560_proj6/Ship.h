#pragma once

#include <string>
#include <iostream>

class Ship
{
private:
    std::string name;
    std::string yearBuilt;

public:
    Ship();
    Ship(std::string n, std::string y);
    virtual ~Ship();
    std::string getName() const;
    void setName(std::string n);
    std::string getYearBuilt() const;
    void setYearBuilt(std::string y);
    virtual void print() const;

    friend std::ostream& operator<<(std::ostream& os, const Ship& ship);
    friend std::istream& operator>>(std::istream& is, Ship& ship);
};
