#include <string>
#include <iostream>

class Critter {
	private:
		std::string name;
	public:
		Critter(std::string name) {
			Critter::name = name;
		} // end constructor
		
		Critter() {
			Critter::name = "anonymous";
		} // end no-parameter constructor

		void setName(std::string name) {
			Critter::name = name;
		} // end setName

		std::string getName() {
			return name;
		} // end getName

		void sayHi() {
			std::cout << "Hi, my name is " << name << std::endl;
		} // end sayHi
}; // end Critter
   // remember to use semicolons at the end of class def in c++

int main() {

	/* expected output
	 * critter: Gary
	 * critter d: Maggie
	 * Hi, my name is Gary
	 * My cat's name is Gary
	 */
	
	Critter c;
	c.setName("Gary");
	Critter d = Critter("Maggie");
	std::cout << "critter: " << c.getName() << std::endl;
	std::cout << "critter d: " << d.getName() << std::endl;
	c.sayHi();
	std::cout << "My cat's name is " << c.getName() << std::endl;
	return 0;
}
