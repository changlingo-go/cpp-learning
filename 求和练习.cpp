#include<iostream>

int main(){
    int sum = 0;
    int number;
    int wish;
    double average;
    int max;

    std::cout << "你期望求几个数的和？";
    std::cin >> wish;
    for (int i = 1;i <= wish;i++) {
        std::cin >> number;
        if (i == 1) { max = number; }
        else if (number > max) { max = number; }
        sum = sum + number;
    }
    average = static_cast<double>(sum) / wish;
    std::cout <<"总和是" << sum;
    std::cout << "平均值是" << average;
    std::cout << "最大值" << max;
}
