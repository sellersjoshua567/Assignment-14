// Joshua Sellers
// 11/27/2025
// CIS 1202 501

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
	std::string manufacturer;
	int year, doors, towCap;

	std::cout << "Vehicle:\n";
	std::cout << "Enter manufacturer: ";
	std::getline(std::cin, manufacturer);
	std::cout << "Enter year built: ";
	std::cin >> year;
	std::cin.ignore();
	Vehicle v(manufacturer, year);
	v.displayInfo();
	std::cout << "\n";

	std::cout << "Car:\n";
	std::cout << "Enter manufacturer: ";
	std::getline(std::cin, manufacturer);
	std::cout << "Enter year built: ";
	std::cin >> year;
	std::cout << "Enter number of doors: ";
	std::cin >> doors;
	std::cin.ignore();
	Car c(manufacturer, year, doors);
	c.displayInfo();
	std::cout << "\n";

	std::cout << "Truck:\n";
	std::cout << "Enter manufacturer: ";
	std::getline(std::cin, manufacturer);
	std::cout << "Enter year built: ";
	std::cin >> year;
	std::cout << "Enter towing capacity: ";
	std::cin >> towCap;
	Truck t(manufacturer, year, towCap);
	t.displayInfo();

	return 0;
}