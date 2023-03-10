#pragma once

#include"Person.h"


class User : public Person
{
public:
	User(string name, int age) : Person(name, age) {}
	~User() {}

	void printInfo() override;
};