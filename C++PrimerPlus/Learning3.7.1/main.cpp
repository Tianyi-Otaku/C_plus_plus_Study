#include<iostream>
const int CONVERSITION_FACTORS = 12;
int main(void) {
	int foot;//Ӣ��
	int inch;//Ӣ��
	std::cout << "�������Լ������[Ӣ��]:__\b\b" ;
	std::cin >> inch;
	foot = inch / CONVERSITION_FACTORS;
	inch = inch % CONVERSITION_FACTORS;
	std::cout << "���Ϊ��" << foot << "Ӣ��" << inch << "Ӣ�硣" << std::endl;
	return 0;
}
