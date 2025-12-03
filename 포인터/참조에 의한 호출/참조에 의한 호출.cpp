#include <iostream>

void swap(int* px, int* py) {
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main() {
	int a = 100, b = 200;
	std::cout << "a = " << a << " b = " << b << "\n";

	swap(&a, &b);

	std::cout << "a = " << a << " b = " << b << "\n";
}
