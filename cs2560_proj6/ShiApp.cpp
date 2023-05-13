//
// Name:	Korfali, Khaled
// Project:	6
// Due: 	05-12-2023
// Course:	cs-2560-01-sp23
//
// Description:
//		This program demonstrates the classes Ship, CruiseShip, and CargoShip in a program that has an array of Ship pointers.
//		The array elements are initialized with the addresses of dynamically allocated Ship, CruiseShip, and CargoShip objects.
//		The program then steps through the array, calling each object's print function.
//		The program also prompts for 1 CruiseShip input and tests the overloaded operators + and ++ for CruiseShip.
//		Finally, the program deallocates the memory.
//
//

#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;



//Constants
const int ARRAYSIZE = 3;


int main()
{
	// Display Header
	cout << "Ship by K. Korfali" << endl << endl;

	// Declare an array of ship pointers
	Ship* ships[ARRAYSIZE];

	// Initialize array with dynamically allocated Ship, CruiseShip, and CargoShip objects
	ships[0] = new Ship("Shipper", "1912");
	ships[1] = new CruiseShip("Tom Cruise", "2008", 2000);
	ships[2] = new CargoShip("Cargo", "1980", 5000);

	// Call print function for each object in array
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		cout << *ships[i] << endl;
	}

	// Prompt for 1 CruiseShip
	CruiseShip cruiseShip;
	cin >> cruiseShip;
	cout << "\nYou entered (printed using cout): \n" << cruiseShip << endl;

	// Test overloaded operator + (CruiseShip + n)
	cout << cruiseShip.getName() << " + 100:" << endl;
	cruiseShip = cruiseShip + 100;
	cout << cruiseShip << endl;

	// Test overloaded operator + (n + CruiseShip)
	cout << "100 + " << cruiseShip.getName() << ":" << endl;
	cruiseShip = cruiseShip + 100;
	cout << cruiseShip << endl;

	// Test overloaded operator ++ (prefix)
	cout << "++" << cruiseShip.getName() << " (prefix):" << endl;
	++cruiseShip;
	cout << cruiseShip << endl;

	// Test overloaded operator ++ (postfix)
	cout << cruiseShip.getName() << "++ (postfix):" << endl;
	cruiseShip++;
	cout << cruiseShip; // final endl statement printed when doing cout for cruiseShip

	// Deallocate memory
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		delete ships[i];
	}

	// Indicate successful execution of code
	return 0;
}
