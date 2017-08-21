#pragma once
class Vehicle
{
public:
	Vehicle();
	~Vehicle();
	int GetWheels();
	void SetWheels(int numWheels);
	void IncrementWheels();
private:
	int wheels;

};

