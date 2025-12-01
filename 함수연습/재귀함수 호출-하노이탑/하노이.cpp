#include <iostream>

void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1)
		std::cout << "원판 1을 " << from << "에서 " << to << "으로 옮긴다.\n";
	else {
		hanoi_tower(n - 1, from, to, tmp);
		std::cout << "원판 " << n << "을 " << from << "에서 " << to << "으로 옮긴다.\n";
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main() {
	hanoi_tower(4, 'A', 'B', 'C');
}
