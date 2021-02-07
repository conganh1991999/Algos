#include<iostream>

#include "Animal.cpp"

#define SUCCESS_CODE 0
#define FAILURE_CODE 1

using namespace std;

class Kennel {
private:
	unsigned int maxResidents;
	unsigned int numResidents;
	Animal** residents;
public:
	Kennel(unsigned int maxResidents) {
		this->maxResidents = maxResidents;
		this->numResidents = 0;
		this->residents = new Animal * [maxResidents];
		for (int i = 0; i < maxResidents; i++)
		{
			this->residents[i] = NULL;
		}
	}

	~Kennel() {
		for (int i = 0; i < maxResidents; i++)
		{
			if (residents[i] != NULL)
				delete residents[i];
			residents[i] = NULL;
		}
		if (residents != NULL)
			delete residents;
		residents = NULL;
	}

	unsigned int accept(Animal* animal) {
		if (numResidents == maxResidents)
			return FAILURE_CODE;
		else if (numResidents < maxResidents && numResidents >= 0) {
			int i = 0;
			for (; residents[i] != NULL; i++);
			residents[i] = animal;
			numResidents++;
			return SUCCESS_CODE;
		}
		else {
			throw "exception: number of residents is invalid";
		}
	}

	Animal* release(unsigned int pen) {
		if (pen > numResidents || pen <= 0) {
			return NULL;
		}
		int penIndex = pen - 1;
		Animal* animal = residents[penIndex];
		residents[penIndex] = NULL;
		numResidents--;
		return animal;
	}

	void listAnimal() {
		if (numResidents > 0) {
			for (int i = 0; i < maxResidents; i++) {
				if (residents[i] != NULL) {
					printf("The animal in pen %d said that: ", i + 1);
					residents[i]->getClassName();
				}
			}
		}
	}
};