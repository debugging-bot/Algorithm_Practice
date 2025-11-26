//재귀적인 팩토리얼 함수 계산
#include <iostream>

long factorial(int n) {
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}

int main() {
	int x = 0;
	long n;

	std::cout << "정수를 입력하시오: ";
	std::cin >> n;
	std::cout << n << "!은 " << factorial(n) << "입니다.";
}
