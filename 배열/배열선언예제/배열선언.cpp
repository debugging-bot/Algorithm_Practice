#include <iostream>

int main() {
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 50;
	scores[3] = 30;
	scores[4] = 40;
	
	for (i = 0; i < 5; i++)
		std::cout << "scores[" << i << "] = " << scores[i] << "\n";

}
