#include<iostream>

int main() {
	int max;
	int sum = 0;
	int numbers[5];
	for (int i = 0;i <5;i++) {
		std::cin >> numbers[i];
		sum = sum + numbers[i];
		if (i == 0) {
			max = numbers[0];
		}
		if (numbers[i] > max) {
			max = numbers[i];
			}
	}

	std::cout << "最大值=" << max << std::endl;
	std::cout << "总和=" << sum << std::endl;

	return 0;
}