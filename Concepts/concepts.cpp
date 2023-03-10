#include<iostream>
using namespace std;

class Animal { //base class
private:
	//attribute
    string name; 
    int age;	
public:
	//constructor
    Animal(string n, int a) { 
        name = n;
        age = a;
    }
	//method
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }

    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Dog : public Animal { //derived class
public:
	//constructor
    Dog(string n, int a) : Animal(n, a) {}
	//method
    void makeSound() override{
        cout << "Woof!" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Animal a =  Dog("Bob", 2);
    a.displayInfo(); //inheritance
    a.makeSound(); //polymorphism

    return 0;
}

