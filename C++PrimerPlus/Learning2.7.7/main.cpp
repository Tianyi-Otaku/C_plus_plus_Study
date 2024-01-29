#include<iostream>
void Timer(int hours, int minutes) {
	std::cout << "时间:" << hours << "时" << minutes << "分" << std::endl;
}


int main(void) {
	std::cout << "请输入小时：" << std::endl;
	int x;
	std::cin >> x;
	std::cout << "请输入分钟：" << std::endl;
	int y;
	std::cin >> y;
	Timer(x,y);
	return 0;
}