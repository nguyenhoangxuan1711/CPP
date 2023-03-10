#pragma once
#include<iostream>
#include"MyInterface.h"
using namespace std;

static int countCar = 0;

class Car {
public:
	Car(int power)
		: serialNumber(++countCar), enginePower(power) {}
	~Car() {}

	//getter
	int getEnginePower() { return enginePower; }
	int getSerialNumber() { return serialNumber; }
	double getEngineSpeed() { return engineSpeed; }
	//setter
	void setEngineSpeed(double speed) { engineSpeed = speed; }
 
	virtual void printInfo();
protected:
	const int enginePower; // hp
	const int serialNumber;
	double engineSpeed = 0.0; // km/h
};
