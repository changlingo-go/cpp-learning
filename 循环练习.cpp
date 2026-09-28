#include<iostream>

int main() {
    int age;
    int wish;
    
    std::cout << "你今年多大了?";
    std::cin >> age;
    std::cout << "你期望预测几年";
    std::cin >> wish;
    if (wish > 0) {
        for (int i = 1; i <= wish; i++) {
            std::cout << "第" << i << "年" << age + i << "岁" << std::endl;
        }
    }
    else {
        std::cout << "预测年数必须大于0！" << std::endl;
    }
    return 0;
 }