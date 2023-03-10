#include <iostream>
#include"Engineer.h"
#include"User.h"
#include"NormalCar.h"
#include"PerformanceCar.h"
using namespace std;

int main()
{
	Engineer* p1 = new Engineer("Xuan", 23);
	User* p2 = new User("Phong", 26);

	Car* c1 = new NormalCar(100);
	Car* c2 = new PerformanceCar(200);

	//
	p1->printInfo();
	p2->printInfo();
	cout << endl;

	//test driveCar
	p1->driveCar(c1, 10);
	p1->driveCar(c2, 20);
	p2->driveCar(c1, 10);
	p2->driveCar(c2, 20);
	cout << endl;

	//test positioningCar
	p1->positioningCar(c1);
	p1->positioningCar(c2);
	p2->positioningCar(c1);
	p2->positioningCar(c2);
	cout << endl;

	p1->readEnginePower(c1);
	p1->readEnginePower(c2);
	p2->readEnginePower(c1);
	p2->readEnginePower(c2);
	cout << endl;

	p1->readEngineSpeed(c1);
	p1->readEngineSpeed(c2);
	p2->readEngineSpeed(c1);
	p2->readEngineSpeed(c2);
	cout << endl;

	p1->readSerialNumber(c1);
	p1->readSerialNumber(c2);
	cout << endl;

	p1->programNavigationSystem(c1, 10, 10);
	p1->programNavigationSystem(c2, 20, 20);
	cout << endl;

	PerformanceCar* pcar2 = dynamic_cast<PerformanceCar*>(c2);
	pcar2->turboCharge();

	return 0;
}