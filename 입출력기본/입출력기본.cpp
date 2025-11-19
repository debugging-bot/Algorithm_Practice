#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double w;
	double h;
	double area;
	double perimeter;

	printf("사각형의 가로와 세로를 입력해주세요: ");
	scanf("%lf %lf", &w, &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %lf, 사각형의 둘레: %lf \n", area, perimeter);


	return 0;
}
