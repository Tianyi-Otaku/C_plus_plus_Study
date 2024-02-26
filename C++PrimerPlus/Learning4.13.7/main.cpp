#include<iostream>
#include<string>
struct pizza{
	std::string name;
	float  diameter;
	float  weight;
};

void cinPizza(pizza& a);
void coutPizza(pizza& a);

int main(void) {
	pizza a;
	cinPizza(a);
	coutPizza(a);

}
void cinPizza(pizza& a) {
	using namespace std;
	cout << "请输入pizza名称" << endl;
	getline(cin, a.name);
	cout << "请输入pizza的直径" << endl;
	cin >> a.diameter;
	cout << "请输入pizza的重量" << endl;
	cin >> a.weight;

	
}
void coutPizza(pizza& a) {
	using namespace std;
	cout <<"您定的pizza信息如下：" << endl;
	cout << "pizza的名称为" <<a.name<< endl;
	cout << "pizza的重量为" << a.weight << endl;
	cout << "pizza的直径为" << a.diameter << endl;
}
