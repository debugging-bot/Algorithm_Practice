#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
	struct student s;

	s.number = 2271437;
	strcpy(s.name, "이승직");
	s.grade = 4.3;

	std::cout << "학번: " << s.number << "\n";
	std::cout << "이름: " << s.name << "\n";
	std::cout << "학점: " << s.grade << "\n";

}
