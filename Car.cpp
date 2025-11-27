// Joshua Sellers
// CIS 1202 501
// 11/27/2025



#include "Car.h"
#include <iostream>

Car::Car(std::string manu, int year, int doors)
	: Vehicle(manu, year), numDoors(doors) { }
int Car::getNumDoors() const { return numDoors; }
void Car::setNumDoors(int doors) { numDoors = doors; }

void Car::displayInfo() const {
	Vehicle::displayInfo();
	std::cout << "Number of Doors: " << numDoors << "\n";
}