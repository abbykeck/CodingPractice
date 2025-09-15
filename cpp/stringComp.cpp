#include <iostream>

int main() {
	std::string first = "hello";
	std::string second = "hello";
	std::string &third = first;

	if (first == second) {
		std::cout << "First equals second with == operator" << std::endl;
	} else {
		std::cout << "First does not equal second with == operator" << std::endl;
	} // end if

	if (first.compare(second) == 0) {
		std::cout << "First equals second with compare" << std::endl;
	} // end if

	if (first == third) {
		std::cout << "First equals third with == operator" << std::endl;
	} // end if
	return 0;
}
