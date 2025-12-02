#include <iostream>

int main() {
	int i = 3000;
	int* p = NULL;
	p = &i;

	std::cout << "i = " << i << "\n"; //변수의 값 출력
	std::cout << "&i = " << &i << "\n";//변수의 주소 출력

	std::cout << "p = " << p << "\n";//포인터의 값 출력
	std::cout << "*p = " << *p << "\n";//포인터를 통한 간접 참조값 출력
}
