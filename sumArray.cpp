#include<iostream>

int sumArray(int* numbers, int size) {
	int sum = 0;
	for (int i = 0;i < size;i++) {
		sum = sum + numbers[i];
	}
	return sum;
}
int maxArray(int* numbers, int size) {
	int max;
	for (int i = 0;i < size;i++) {
		if (i == 0) {
		max = numbers[i];
	}
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	return max;
}
int minArray(int* numbers, int size) {
	int min;
	for (int i = 0;i < size;i++) {
		if (i == 0) {
			min = numbers[i];
		}
		if (min > numbers[i]) {
			min = numbers[i];
		}
	}
	return min;
}
int main() {
	int numbers[5] = { 10,-20,30,-40,50 };
	int sum = sumArray(numbers, 5);
	int max = maxArray(numbers, 5);
	int min = minArray(numbers, 5);
	std::cout <<"总和" << sum << std::endl;
	std::cout << "最大值" << max << std::endl;
	std::cout << "最小值" << min << std::endl;
	return 0;
}