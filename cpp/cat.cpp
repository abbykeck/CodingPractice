#include <iostream>
#include "animal.h"
#include "cat.h"

Cat::Cat() {
	Cat::name = "anonymous";
	Cat::owner = "stray";
}

Cat::Cat(std::string name, std::string owner) {
	Cat::name = name;
	Cat::owner = owner;
}

void Cat::meow() {
	std::cout << "...meow" << std::endl;
}
