#include <iostream>

int Bigger(int x, int y) {
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return 0;;
}

int main() {
	int A, B, Z;
	std::cout << "정수를 입력하시오: ";
	std::cin >> A;
	std::cout << "정수를 입력하시오: ";
	std::cin >> B;

	Z = Bigger(A, B);

	if (Z != 0)
		std::cout << "더 큰 값은 " << Z << "입니다.\n";
	else
		std::cout << "두 수는 같습니다.\n";
}
