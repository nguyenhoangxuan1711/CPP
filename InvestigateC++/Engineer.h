#pragma once

#include"Person.h"



class Engineer : public Person, public ProgramNavigationSystem, public ReadCarSerialNumber
{
public:
	Engineer(string name, int age) : Person(name, age) {}
	~Engineer() {}

	void printInfo() override;

	void programNavigationSystem(Car* car, double lon, double lat) override;

	void readSerialNumber(Car* car) override;
};