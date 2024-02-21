#include<iostream>
int main(void) {
	using namespace std;
	cout << "请输入驱车英里:" << endl;
	double x;
	cin >> x;
	cout << "请输入汽油量:" << endl;
	double y;
	cin >> y;
	cout << "汽油量为一加仑的里程为：" << x / y << endl;

	return 0;
}