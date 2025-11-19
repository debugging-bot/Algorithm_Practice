#include <iostream>

void NUM(int q) {
	for (int n = 1; n <= q; n++) { //1부터 q까지의 모든 숫자
		int x = 0; //약수의 개수 카운트. x가 2이면 소수임

		for (int i = 1; i <= n; i++) { //q사이의 숫자 하나씩 대입 시작
			if (n % i == 0)
				x++;
		 }
		if (x == 2)
			std::cout << n << " ";
	}
}

void Count(int n) {
	std::cout << "1부터 " << n << "사이의 소수는 ";
	NUM(n);
	std::cout << "입니다.";
}

int main() {
	int n;
	std::cout << "정수를 입력하시오: ";
	std::cin >> n;

	Count(n);
}
