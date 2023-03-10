#pragma once
#include<iostream>
#include"MyInterface.h"
#include"PerformanceCar.h"
#include"Car.h"
using namespace std;

class Person : public DriveCar, public PositioningCar, public ReadCar
{
public:
	Person(string n, int a) : name(n), age(a) {}
	~Person() {}

	virtual void printInfo();

	virtual void driveCar(Car* car, double speed) override;

	virtual void positioningCar(Car* car) override;

	virtual void readEngineSpeed(Car* car) override;
	virtual void readEnginePower(Car* car) override;
protected:
	string name;
	int age;
};

