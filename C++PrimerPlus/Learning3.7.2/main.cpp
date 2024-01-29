#include<iostream>
const int CONVERSION_A = 12;
const double CONVERSION_B = 0.0254;
const double CONVERSION_C = 2.2;
double BMI(double height, double weight) {
	return weight / (height * height);
}
int main(void) {
	int height_foot;
	int height_inch;
	int weight;
	std::cout << "请输入身高(以几英尺几英寸的方式)和体重(磅),例如：3英尺,6英寸,16磅。" << std::endl;
	std::cout << "现在，请先输入英尺:" << std::endl;
	std::cin >> height_foot;
	std::cout << "接着，请输入英寸:" << std::endl;
	std::cin >> height_inch;
	std::cout << "最后，请输入体重:" << std::endl;
	std::cin >> weight;
	height_inch = height_inch + height_foot * CONVERSION_A;
	double height_m = height_inch * CONVERSION_B;
	double weight_kg = weight * CONVERSION_C;
	std::cout << "您的身高为：" <<height_m <<"米。" << std::endl;
	std::cout << "您的BMI为：" <<weight_kg <<"千克。" << std::endl;
	std::cout << "您的BMI为："<< BMI(height_m,weight_kg)<<"。" << std::endl;
	return 0;
}