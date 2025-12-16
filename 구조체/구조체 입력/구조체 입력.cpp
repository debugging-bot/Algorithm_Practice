#include <iostream>

struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
	struct student s;

	std::cout << "학번을 입력하세요: ";
	std::cin >> s.number;

	std::cout << "이름을 입력하세요: ";
	std::cin >> s.name;

	std::cout << "학점을 입력하세요(실수): ";
	std::cin >> s.grade;
	std::cout << "\n";

	std::cout << "학번: " << s.number << "\n";
	std::cout << "이름: " << s.name << "\n";
	std::cout << "학점: " << s.grade << "\n";
}
