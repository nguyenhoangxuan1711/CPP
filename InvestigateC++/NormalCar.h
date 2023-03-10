#pragma once

#include"Car.h"

class NormalCar : public Car
{
public:
	NormalCar(int power) : Car(power) {}
	~NormalCar() {}

	void printInfo() override;
protected:
};