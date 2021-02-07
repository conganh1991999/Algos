#include<iostream>
#include<string.h>

#include "Kennel.cpp"

using namespace std;

int main() {
	Animal* d1 = new Dog("Rover");
	Animal* d2 = new Dog("Spot");
	Animal* d3 = new Dog("Chip");
	Animal* d4 = new Dog("Buddy");
	Animal* d5 = new Dog("Butch");
	Animal* c1 = new Cat("Tinkerbell");
	Animal* c2 = new Cat("Inky");
	Animal* c3 = new Cat("Fluffy");
	Animal* c4 = new Cat("Princess");
	Animal* c5 = new Cat("Sylvester");
	Kennel* kennel = new Kennel(10);
	kennel->accept(d1);
	kennel->accept(c1);
	kennel->accept(c2);
	kennel->accept(d2);
	kennel->accept(d3);
	kennel->accept(c3);
	kennel->accept(c4);
	kennel->accept(c5);
	kennel->release(3);
	kennel->release(4);
	kennel->listAnimal();
	return EXIT_SUCCESS;
}