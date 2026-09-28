#include<iostream>
#include<string>

int main(){
    std::cout << "你今年多大了?" << std::endl;
    int age;
    std::cin>>age;
    std::cout << "你的名字是？" << std::endl;
    std::string name;
    std::cin >> name;
    if (age >= 18) {
        std::cout<<"你已经成年";
    }
    else {
        std::cout<<"你还未成年";
    }
    age=age+1;
    std::cout<<name<<"明年的年纪是"<<age;
    return 0;
}