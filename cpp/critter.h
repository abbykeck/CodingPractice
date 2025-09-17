#ifndef CRITTER_H_EXISTS // ifndef -> if not defined, do everything up until endif
#define CRITTER_H_EXISTS

// this ^ is called a header guard
#include <string>
class Critter {
	private:
		std::string name;
	public:
		Critter();
		Critter(std::string name);
		void setName(std::string name);
		std::string getName();
}; // end class def

#endif
