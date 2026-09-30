#include<iostream>

int swapValue(int* x,int* y) {
	int x1 = *y;
	int y1 = *x;

	*x = x1;
	*y = y1;
}
int main() {
	int a, b;
	std::cin >> a;
	std::cin >> b;
	int* a1 = &a;
	int* b1 = &b;
	swapValue(a1, b1);
	std::cout << *a1 << std::endl << *b1;
}