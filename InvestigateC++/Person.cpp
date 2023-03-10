#include"Person.h"

//Person
void Person::printInfo() {
	cout << "Person's info:" << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl;
}

void Person::driveCar(Car* car, double speed) {
	car->setEngineSpeed(speed);
	cout << name << " is driving car " << car->getSerialNumber()
		<< " at " << car->getEngineSpeed() << " km/h." << endl;
}

void Person::positioningCar(Car* car) {
	PerformanceCar* pcar = dynamic_cast<PerformanceCar*>(car);
	if (pcar) {
		cout << name << " is positioning car " << car->getSerialNumber() << ": ";
		pcar->positioning();
	}
	else {
		cout << "Normal Car " << car->getSerialNumber() << " does not have navigating system." << endl;
	}
}

void Person::readEngineSpeed(Car* car) {
	cout << name << " reads car " << car->getSerialNumber() << "'s engine speed: "
		<< car->getEngineSpeed() << " km/h." << endl;
}

void Person::readEnginePower(Car* car) {
	cout << name << " reads car " << car->getSerialNumber() << "'s engine power: "
		<< car->getEnginePower() << " hp." << endl;
}
