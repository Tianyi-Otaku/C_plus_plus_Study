#include<iostream>
void Timer(int hours, int minutes) {
	std::cout << "ʱ��:" << hours << "ʱ" << minutes << "��" << std::endl;
}


int main(void) {
	std::cout << "������Сʱ��" << std::endl;
	int x;
	std::cin >> x;
	std::cout << "��������ӣ�" << std::endl;
	int y;
	std::cin >> y;
	Timer(x,y);
	return 0;
}