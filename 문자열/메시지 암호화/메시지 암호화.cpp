#include <stdio.h>
#include <iostream>

void encrypt(char cipher[], int shift) {
	int i = 0;
	while (cipher[i] != '\0') {
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			cipher[i] = cipher[i] + shift; //cipher[i] += shift;
			
			if (cipher[i] > 'z')
				cipher[i] = cipher[i] - 26; //cipher[i] -= 26;
		}
		i++;
	}
	std::cout << "암호화된 문자열: " << cipher << "\n";
}

int main() {
	char cipher[50];
	int shift = 3;
	std::cout << "문자열을 입력하시오: ";
	fgets(cipher, 50, stdin); //한줄 전체 입력
	encrypt(cipher, shift);
	return 0;
}
