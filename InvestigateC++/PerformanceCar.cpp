#include"PerformanceCar.h"

void PerformanceCar::printInfo() {
	Car::printInfo();
	cout << "***Performance Car***" << endl;
}

void PerformanceCar::turboCharge() {
	engineSpeed = engineSpeed * 1.1;
	cout << "Turbo Charge! Car " << serialNumber << "'s speed is now at "
		<< engineSpeed << endl;
}

void PerformanceCar::positioning() {
	cout << "Position is now at "
		<< longitude << ", " << latitude << endl;
}

void PerformanceCar::programNavigationSystem(double lon, double lat) {
	longitude = lon;
	latitude = lat;
	cout << "Program navigation: ";
	positioning();
}