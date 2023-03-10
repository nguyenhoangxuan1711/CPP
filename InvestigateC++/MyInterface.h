#pragma once

//#include"Car.h"

class Car;


class AdvancedFunction { //interface
public: virtual void turboCharge() = 0;
};

class NavigatingSystem {
public:
	virtual void positioning() = 0;
	virtual void programNavigationSystem(double lon, double lat) = 0;
};


class DriveCar { //interface
public: virtual void driveCar(Car* car, double speed) = 0;
};

class PositioningCar { //interface
public: virtual void positioningCar(Car* car) = 0;
};

class ProgramNavigationSystem { //interface
public: virtual void programNavigationSystem(Car* car, double lon, double lat) = 0;
};

class ReadCar { //interface
public:
	virtual void readEngineSpeed(Car* car) = 0;
	virtual void readEnginePower(Car* car) = 0;
};

class ReadCarSerialNumber { //interface
public: virtual void readSerialNumber(Car* car) = 0;
};