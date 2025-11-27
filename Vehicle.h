// Joshua Sellers
// CIS 1202 501
// 11/27/2025



#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
	std::string manufacturer;
	int yearBuilt;

public:
	Vehicle(std::string manu = "", int year = 0);
	std::string getManufacturer() const;
	int getYearBuilt() const;
	void setManufacturer(std::string manu);
	void setYearBuilt(int year);
	virtual void displayInfo() const;
};
#endif
