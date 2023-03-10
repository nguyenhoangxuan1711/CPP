#include"Engineer.h"

//Engineer
void Engineer::printInfo() {
	Person::printInfo();
	cout << name << " is Engineer" << endl;
}

void Engineer::programNavigationSystem(Car* car, double lon, double lat) {
	PerformanceCar* pcar = dynamic_cast<PerformanceCar*>(car);
	if (pcar) {
		cout << name << " is programming car " << car->getSerialNumber() << "'s navigating system: ";
		pcar->programNavigationSystem(lon, lat);
	}
	else {
		cout << "Normal Car does not have navigating system!" << endl;
	}
}

void Engineer::readSerialNumber(Car* car) {
	cout << name << " reads car's serial number:" << endl
		<< "Serial number: " << car->getSerialNumber() << endl;
}