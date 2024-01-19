#include<iostream>
int fun(int x);
int main(void) {
	double x;
	std::cout << "请输入摄氏温度:" << std::endl;
	std::cin >> x;
	std::cout << x << "摄氏温度对应的华氏温度为:" << fun(x) << std::endl;
	return 0;
}
int fun(int x) {
	return 1.8 * x + 32.0;
}