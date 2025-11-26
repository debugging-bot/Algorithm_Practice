#include <iostream>

int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main() {
	int a, b;

	std::cout << "두 정수를 입력하세요(x는 y보다 커야한다.): ";
	std::cin >> a >> b;
	std::cout << "두 수의 최대공약수는 " << gcd(a, b) << "입니다.";
}
