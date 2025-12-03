#include <iostream>

int main() {
	int i = 10;
	int* pi = &i;

	std::cout << "i = " << i << ", pi = " << pi<< "\n";

	(*pi)++;

	std::cout << "i = " << i << ", pi = " << pi << "\n";



	std::cout << "i = " << i << ", pi = " << pi << "\n";

	*pi++;

	std::cout << "i = " << i << ", pi = " << pi << "\n";
}
