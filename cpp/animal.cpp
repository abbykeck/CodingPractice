#include <iostream>
#include "animal.h"


/* format for subclass
 * class subClass: public superClass {
 * 	new functionality
 * };
 */

Animal::Animal() {
	Animal::name = "anonymous";
}

Animal::Animal(std::string name) {
	Animal::name = name;
}

void Animal::noise() {
	std::cout << "HONK!!!!" << std::endl;
}
