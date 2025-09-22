/* format for subclass
 * class subClass: public superClass {
 *      new functionality
 * };
 */
#ifndef CAT_H_EXISTS
#define CAT_H_EXISTS

#include <iostream>
#include "animal.h"

class Cat: public Animal {
	protected:
		std::string owner;
	public:
		Cat();
		Cat(std::string name, std::string owner);
		void meow();
}; // end class def

#endif
