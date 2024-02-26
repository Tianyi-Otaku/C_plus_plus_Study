#include<iostream>
#include<array>
int main(void) {
	std::array<int, 3> grade;
	std::cout << "请输入您的三次40码跑的成绩" << std::endl;
	float x = 0;
	for (int i = 0; i < 3; i++) {
		std::cin >> grade[i];
		x += grade[i];
	}
	std::cout<<3<< "次的平均成绩为:"<< x/3.0<< std::endl;


	return 0;
}