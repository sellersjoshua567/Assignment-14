// Joshua Sellers
// CIS 1202 501
// 11/27/2025



#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int towingCapacity;

public:
	Truck(std::string manu = "", int year = 0, int towCap = 0);
	int getTowingCapacity() const;
	void setTowingCapacity(int towCap);
	void displayInfo() const override;
};
#endif
