#include <iostream>
#include <stdlib.h>
#include <iomanip>

#define SIZE 6

int main() {
	int freq[SIZE] = { 0 };
	int i;

	for (i = 0; i < 10000; i++)
		++freq[rand() % 6];

	std::cout << "주사위 10000번 굴려서 빈도 카운트\n";
	std::cout << "=================\n";
	std::cout << "  면    빈도\n";
	std::cout << "=================\n";

	for (i = 0; i < SIZE; i++)
		std::cout << std::setw(3) << i+1 << "     " << std::setw(3) << freq[i] << "\n";

}
