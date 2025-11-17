#include <iostream>

int main() {
	long long A, B, C;
	std::cin >> A >> B >> C;

	if (1 <= A && A <= 1e12 && 1 <= B && B <= 1e12 && 1 <= C && C <= 1e12) {
		std::cout << A + B + C;
	}
}