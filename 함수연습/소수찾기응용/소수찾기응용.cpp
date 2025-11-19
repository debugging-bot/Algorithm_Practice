#include <iostream>

void Count() {
	
}

void NUM(int x) {
	for (int i = 1; i <= x; i++) { //1부터 x까지의 모든 숫자
		int n = 0;
		for (int K = 1; K <= i; K++)
			if (i % K == 0)
				n++;
			if(n ==2)
				std::cout << i <<"는 1부터 " << x << "사이의 소수입니다.\n";
	}
}

int main() {
	int n;
	std::cout << "정수를 입력하시오: ";
	std::cin >> n;

	NUM(n);
}
