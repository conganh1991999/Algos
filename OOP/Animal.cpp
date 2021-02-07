#include<string.h>
#include<iostream>

using namespace std;

class Animal {
protected:
	string name;
public:
	Animal(string name) {
		this->name = name;
	}

	virtual void getClassName() {
		cout << "Animmmmmm, my name is: " << this->name << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string name) : Animal(name) {
	
	}

	void getClassName() {
		cout << "Meooooooo, my name is: " << this->name << endl;
	}
};

class Dog : public Animal {
public:
	Dog(string name) : Animal(name) {

	}

	void getClassName() {
		cout << "Gawwwwwwww, my name is: " << this->name << endl;
	}
};