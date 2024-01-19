#include<iostream>
int main(void) {
	std::cout << "请输入您的年龄:__\b\b";
	int age = 0;
	std::cin >> age;
	std::cout << "年龄为:" << age << ",它包含了" << age * 12 << "个月。" << std::endl;
	return 0;
}