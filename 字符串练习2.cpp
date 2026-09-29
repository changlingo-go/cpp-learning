#include<iostream>
#include<string>

int countVowels(std::string name) {
	int number1 = 0;
	for (int i = 0;i < name.length();i++) {
		if (name[i] == 'a' || name[i] == 'A' ||
			name[i] == 'e' || name[i] == 'E' ||
			name[i] == 'i' || name[i] == 'I' ||
			name[i] == 'o' || name[i] == 'O' ||
			name[i] == 'u' || name[i] == 'U') {
			number1 = number1 + 1;
			
		}
	}
	return number1;
}
int main() {
	std::cout << "请输入一句话?";
	std::string text;
	std::getline(std::cin, text);
 
	int result = countVowels(text);
	std::cout << result;
}