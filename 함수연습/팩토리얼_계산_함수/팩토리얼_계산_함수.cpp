#include <iostream>

int Factorial(int x) {
	int n = 1;
	for (int i = 1; i <= x; i++)
		n *= i;

	return n;
}

int main() {
	int n;
	std::cout << "알고 싶은 팩토리얼의 값은? ";
	std::cin >> n;

	std::cout << n << "!의 값은 " << Factorial(n) << "입니다.";
}
