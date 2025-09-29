#include <iostream>

int main() {
	// variables are normally put on the stack for better organization
	int stackInt = 0;
	// use new keyword and pointer to create variables on the heap
	int* heapInt = new int;
	*heapInt = 5;
	int* heapArray = new int[5];
	std::cout << "Int on the stack: " << stackInt << std::endl;
	std::cout << "Int on the heap: " << *heapInt << std::endl;
	// make sure to delete heap variables to free up memory when done with the variables
	// this helps to prevent memory leaks
	delete heapInt;
	// use delete[] for heap arrays
	delete[] heapArray;
	return 0;
}
