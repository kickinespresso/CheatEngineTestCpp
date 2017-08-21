#include "stdafx.h"
#include "Vehicle.h"


Vehicle::Vehicle()
{
	this->wheels = 4;
}


Vehicle::~Vehicle()
{
}

int Vehicle::GetWheels() {
	return this->wheels;
}

void Vehicle::SetWheels(int numWheels) {
	this->wheels = numWheels;
}

void Vehicle::IncrementWheels() {
	this->wheels++;
}
