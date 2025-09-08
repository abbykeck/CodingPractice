#include <iostream>

using namespace std; // putting the namespace here means we don't have to put std:: before several objects below

int main() {
	string userName; // std::string don't use name since that's in namespace std
	cout << "Hi! Please enter your name: "; //std::cout
	// << is the output operator, cout (console output) is an object
	cin >> userName; //std::cin
	// >> is the input operator, cin (console input) is an object
	// We can connect multiple strings/variables with the output operator
	cout << "Hello, " << userName << "! Nice to meet you!" << endl; //std::endl
	return 0;
} // end main
