#include <iostream>
	
struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;

	std::cout << "왼쪽 상단의 좌표를 입력하시오: ";
	std::cin >> r.p1.x >> r.p1.y;

	std::cout << "오른쪽 상단의 좌표를 입력하시오: ";
	std::cin >> r.p2.x >> r.p2.y;

	h = 2 * ((r.p2.x - r.p1.x) + (r.p2.y - r.p1.y));
	w = (r.p2.x - r.p1.x) * (r.p2.y - r.p1.y);

	std::cout << "면적은 " << w << "이고 둘레는 " << h << "입니다.\n";
}
