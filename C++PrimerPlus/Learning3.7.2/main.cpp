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
	std::cout << "���������(�Լ�Ӣ�߼�Ӣ��ķ�ʽ)������(��),���磺3Ӣ��,6Ӣ��,16����" << std::endl;
	std::cout << "���ڣ���������Ӣ��:" << std::endl;
	std::cin >> height_foot;
	std::cout << "���ţ�������Ӣ��:" << std::endl;
	std::cin >> height_inch;
	std::cout << "�������������:" << std::endl;
	std::cin >> weight;
	height_inch = height_inch + height_foot * CONVERSION_A;
	double height_m = height_inch * CONVERSION_B;
	double weight_kg = weight * CONVERSION_C;
	std::cout << "�������Ϊ��" <<height_m <<"�ס�" << std::endl;
	std::cout << "����BMIΪ��" <<weight_kg <<"ǧ�ˡ�" << std::endl;
	std::cout << "����BMIΪ��"<< BMI(height_m,weight_kg)<<"��" << std::endl;
	return 0;
}