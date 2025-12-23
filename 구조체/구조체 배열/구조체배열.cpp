#include <iostream>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		std::cout << "학번을 입력하시오: ";
		std::cin >> list[i].number;
		std::cout << "이름을 입력하시오: ";
		std::cin >> list[i].name;
		std::cout << "학점을 입력하시오(실수): ";
		std::cin >> list[i].grade;
	}

	for (i = 0; i < SIZE; i++)
		std::cout << "학번: " << list[i].number << "이름: " << list[i].name << "학점: " << list[i].grade<< "\n";
}
