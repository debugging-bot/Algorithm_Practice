#include <iostream>

int main() {
	long long A, B;
	std::cin >> A >> B;

	if (A > B && -10000 <= A && A <= 10000 && -10000 <= B && B <= 10000)
		std::cout << ">";
	else if (A < B && -10000 <= A && A <= 10000 && -10000 <= B && B <= 10000)
		std::cout << "<";
	else if (A == B && -10000 <= A && A <= 10000 && -10000 <= B && B <= 10000)
		std::cout << "==";
}