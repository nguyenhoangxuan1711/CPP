#pragma once
#include"Car.h"

class PerformanceCar : public Car, public AdvancedFunction, public NavigatingSystem
{
public:
	PerformanceCar(int power) : Car(power) {}
	~PerformanceCar() {}

	void printInfo() override;

	void turboCharge() override;

	void positioning() override;
	void programNavigationSystem(double lon, double lat) override;

	//getter
	double getLongitude() { return longitude; }
	double getLatitude() { return latitude; }
protected:
	double longitude = 0.0;
	double latitude = 0.0;
};