// Joshua Sellers
// CIS 1202 501
// 11/27/2025



#include "Truck.h"
#include <iostream>

Truck::Truck(std::string manu, int year, int towCap)
	: Vehicle (manu, year), towingCapacity(towCap) { }

int Truck::getTowingCapacity() const { return towingCapacity;  }
void Truck::setTowingCapacity(int towCap) { towingCapacity = towCap; }

void Truck::displayInfo() const {
	Vehicle::displayInfo();
	std::cout << "Towing Capacity: " << towingCapacity << " lbs\n";
}