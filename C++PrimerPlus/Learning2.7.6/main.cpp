#include<iostream>
double lightYear_Formula(double x);
int main(void) {
	std::cout << "�����������:"<<std::endl;
	double x;
	std::cin >> x;
	std::cout << x << "����" <<"="<<lightYear_Formula(x) <<"���ĵ�λ��" << std::endl;
	return 0;
}
double lightYear_Formula(double x) {
	return x * 63240;
}