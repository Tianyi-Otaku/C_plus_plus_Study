#include<iostream>
int main(void) {
	double x;
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "请输入耗油量(100公里/升):" << endl;
	cin >> x;
	cout << "对应的欧美风格耗油量为：" <<  62.14 /(x / 3.875)  << endl;
	return 0;
}