#include<iostream>
#include<array>
int main(void) {
	std::array<int, 3> grade;
	std::cout << "��������������40���ܵĳɼ�" << std::endl;
	float x = 0;
	for (int i = 0; i < 3; i++) {
		std::cin >> grade[i];
		x += grade[i];
	}
	std::cout<<3<< "�ε�ƽ���ɼ�Ϊ:"<< x/3.0<< std::endl;


	return 0;
}