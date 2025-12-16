#include <iostream>
#include <cmath> 

struct point {
	int x;
	int y;
};

int main() {
	
	struct point P1, P2;
	int a, b;
	double dist;

	std::cout << "점의 좌표를 입력하시오(x, y): ";
	std::cin >> P1.x >> P1.y;

	std::cout << "점의 좌표를 입력하시오(x, y): ";
	std::cin >> P2.x >> P2.y;

	a = P1.x - P2.x;
	b = P1.y - P2.y;

	dist = sqrt((double)(a*a+b*b));

	std::cout << "두 점사이의 거리는 " << dist << "입니다.\n";
}
