#include <iostream>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

#include <iostream>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
	int list[SIZE] = { 0 };
	int i, j, temp, least;

	srand((unsigned)time(NULL)); //난수 발생
	for (i = 0; i < SIZE; i++)
		list[i] = (rand() % 100) + 1;

	for (i = 0; i < SIZE - 1; i++) { // i 는 지금 배열 0~8
		least = i; // 작은값을 가지는 배열을 least에 넣어두고싶다 이거임.

		for (j = i + 1; j < SIZE; j++) { // j는 다음 배열 1~9
			if (list[j] < list[least])
				least = j; //작은값을 가지고있는 배열을 least에 저장
		}

		temp = list[i]; //값을 앞뒤로 변경
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0; i < SIZE; i++) //정렬된 숫자 출력
		std::cout << list[i] << " ";
	std::cout << "\n";
}
