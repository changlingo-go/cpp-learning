#include <iostream>
#include <string>

int main() {
	std::string name;
	int number1 = 0;
	int number2 = 0;
	std::cout << "请输入待判断语句" << std::endl;
	std::getline(std::cin, name);
	int number3 = name.length();

	for (int i = 0;i < name.length();i++) {
		if (name[i] == 'a'|| name[i] == 'A'||
			name[i]=='e'|| name[i] == 'E' ||
			name[i] == 'i'|| name[i] == 'I' ||
			name[i] == 'o'|| name[i] == 'O' ||
			name[i] == 'u'||name[i] == 'U'){
			number1 = number1 + 1;
		}if (name[i] == ' ') {
			number2 = number2 + 1;
		}
	}
	std::cout << "元音数量是" << number1<< std::endl;
	std::cout << "空格数量是" << number2<< std::endl;
	std::cout << "总字符数量是" << number3<< std::endl;
}
