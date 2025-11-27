// Joshua Sellers
// CIS 1202 501
// 11/27/2025




#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
	int numDoors;
public:
	Car(std::string manu = "", int year = 0, int door = 0);
	int getNumDoors() const;
	void setNumDoors(int doors);
	void displayInfo() const override;
};
#endif
