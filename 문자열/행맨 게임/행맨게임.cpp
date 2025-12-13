#include <iostream>
#include <stdio.h>

int check(char solution[], char answer[], int ch) {
	int i;
	for (i = 0; solution[i] != NULL; i++) {
		if (solution[i] == ch)
			answer[i] = ch;
	}
	if (strcmp(solution, answer) == 0)
		return 1;
	else return 0;
}

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;

	while (1) {
		std::cout << "문자열을 입력하시오: " << answer << "\n";
		std::cout << "글자를 추측하시오: ";
		ch = getchar();
		if (check(solution, answer, ch) == 1)
			break;
		fflush(stdin); //줄바꿈 문자 제거
	}

	return 0;
}
