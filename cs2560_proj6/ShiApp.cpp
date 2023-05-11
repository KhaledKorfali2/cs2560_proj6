#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;



//Constants
const int SIZE = 3;


int main()
{
	
	Ship* ships[SIZE];

	ships[0] = new Ship("Shipper", "1912");
	ships[1] = new CruiseShip("Tom Cruise", "2008", 2000);
	ships[2] = new CargoShip("Cargo", "1980", 5000);

	for (int i = 0; i < SIZE; i++)
	{
		cout << *ships[i] << endl;
	}

	// Prompt for 1 CruiseShip
	CruiseShip cruiseShip;
	cin >> cruiseShip;
	cout << "\nYou entered: \n" << cruiseShip << endl;

	// Test overloaded operator +
	cout << "\n"  << cruiseShip.getName() << " + 100...\n";
	cruiseShip = cruiseShip + 100;
	cout << cruiseShip << endl;

	// Test overloaded operator +
	cout << "\n100 + " << cruiseShip.getName() << "...\n";
	cruiseShip = cruiseShip + 100;
	cout << cruiseShip << endl;

	// Test overloaded operator ++ (prefix)
	cout << "\nIncrementing passenger capacity of " << cruiseShip.getName() << " (prefix)\n";
	++cruiseShip;
	cout << cruiseShip << endl;

	// Test overloaded operator ++ (postfix)
	cout << "\nIncrementing passenger capacity of " << cruiseShip.getName() << " (postfix)\n";
	cruiseShip++;
	cout << cruiseShip << endl;

	for (int i = 0; i < SIZE; i++)
	{
		delete ships[i];
	}

	return 0;
}
