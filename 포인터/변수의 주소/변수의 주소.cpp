#include <iostream>

int main() {
	int i = 10;
	char c = 69;
	float f = 12.3;

	std::cout << "i의 주소 : " << &i << "\n";
	std::cout << "c의 주소 : " << (void*)&c << "\n";
	std::cout << "f의 주소 : " << &f << "\n";
}
