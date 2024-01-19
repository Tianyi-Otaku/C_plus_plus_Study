#include<iostream>
double lightYear_Formula(double x);
int main(void) {
	std::cout << "请输入光年数:"<<std::endl;
	double x;
	std::cin >> x;
	std::cout << x << "光年" <<"="<<lightYear_Formula(x) <<"天文单位。" << std::endl;
	return 0;
}
double lightYear_Formula(double x) {
	return x * 63240;
}