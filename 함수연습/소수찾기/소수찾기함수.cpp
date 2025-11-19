#include <iostream>

void NUM(int x) {
	int n = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0)
			n++;
	}
	if (n == 2)
		std::cout << x << "는 소수입니다.\n";
	else
		std::cout << x << "는 소수가 아닙니다.\n";
}

int main() {
	int n;
	std::cout << "정수를 입력하시오: ";
	std::cin >> n;

	NUM(n);
}
