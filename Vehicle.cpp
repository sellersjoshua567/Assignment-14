// Joshua Sellers
// CIS 1202 501
// 11/27/2025



#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string manu, int year) : manufacturer(manu), yearBuilt(year) {}

std::string Vehicle::getManufacturer() const { return manufacturer; }
int Vehicle::getYearBuilt() const { return yearBuilt; }

void Vehicle::setManufacturer(std::string manu) { manufacturer = manu; }
void Vehicle::setYearBuilt(int year) { yearBuilt = year; }

void Vehicle::displayInfo() const {
	std::cout << "Vehicle Information:\n";
	std::cout << "Manufacturer: " << manufacturer << "\n";
	std::cout << "year Built: " << yearBuilt << "\n";
}