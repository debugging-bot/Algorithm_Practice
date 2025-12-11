#include <iostream>
#define ENTRIES 5

int main() {
	int i, index, b;
	char dic[ENTRIES][2][30] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"},
	};
	char word[30];

	b = 0;

	std::cout << "단어를 입력하시오: ";
	std::cin >> word;

	//index = 0;
	for (i = 0; i < ENTRIES; i++)
	{
		if (strcmp(dic[i][0], word) == 0)
		{
			std::cout <<  word << " : " << dic[i][1] << "\n";
			b = 1;
			break;
		}
		//index++;
	}
	if(b != 1)
		std::cout << "사전에서 발견되지 않았습니다.\n";
	return 0;
}
