#include<iostream>
int fun(int x);
int main(void) {
	double x;
	std::cout << "�����������¶�:" << std::endl;
	std::cin >> x;
	std::cout << x << "�����¶ȶ�Ӧ�Ļ����¶�Ϊ:" << fun(x) << std::endl;
	return 0;
}
int fun(int x) {
	return 1.8 * x + 32.0;
}