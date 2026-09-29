#include <iostream>
 
void change(int* ptr) {
	*ptr = 100;
}

int main() {
	int number = 10;

		change(&number);
		std::cout << number << std::endl;

	return 0;
}