#include <iostream>

int main() {
	std::string num1 = "";
	std::string num2 = "";
	std::cout << "Enter an integer: ";
	std::cin >> num1;
	std::cout << "Enter another integer: ";
	std::cin >> num2;
	// try keyword works as a safety net for potentially risky code, for example turning strings into ints
	// instead of crashing, we can instead make the program catch the error and run custom error code
	try {
		int n1 = stoi(num1);
		int n2 = stoi(num2);
		std::cout << "Here's the multiplication of both integers: " << n1 * n2 << std::endl;
	} catch(std::invalid_argument) {
		std::cout << "Looks like there was an issue with integer multiplication. Make sure you enter two integers and try again" << std::endl;
	} // end try
	return 0;
}
