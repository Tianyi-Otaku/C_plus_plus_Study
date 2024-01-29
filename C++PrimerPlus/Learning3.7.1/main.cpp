#include<iostream>
const int CONVERSITION_FACTORS = 12;
int main(void) {
	int foot;//英尺
	int inch;//英寸
	std::cout << "请输入自己的身高[英寸]:__\b\b" ;
	std::cin >> inch;
	foot = inch / CONVERSITION_FACTORS;
	inch = inch % CONVERSITION_FACTORS;
	std::cout << "身高为：" << foot << "英尺" << inch << "英寸。" << std::endl;
	return 0;
}
