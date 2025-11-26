#include <iostream>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main() {
	int i;

	srand((unsigned)time(NULL)); //시드를 성정하는 가장 일반적인 방법. 현재 시각을 시드로 사용. 현재 시각은 실행할 때 마다 달라지기 떄문
	for (i = 0; i < 6; i++)
		std::cout << 1 + rand() % MAX << " ";
}
