#include <string>
#include <iostream>
#include "critter.h"

Critter::Critter() {
	Critter::name = "anonymous";
}

Critter::Critter(std::string name) {
	Critter::name = name;
}

Critter::setName(std::string name) {
	Critter::name = name;
}

Critter::sayHi() {
	std::cout << "Hi, my name is " << Critter::name << std::endl;
}

Critter::getName() {
	return Critter::name;
}
